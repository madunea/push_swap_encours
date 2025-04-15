/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:39:00 by maduneau          #+#    #+#             */
/*   Updated: 2025/01/07 18:49:48 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bbig;
	// char	*llittle;

	bbig = (char *)big;
	// llittle = (char *)little;
	i = 0;
	if (little[0] == '\0')
		return (bbig);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && big[i + j])
			j++;
		if (little[j] == '\0')
			return (&bbig[i]);
		j = 0;
		i++;
	}
	return (NULL);
}

// # include <bsd/string.h>
// int	main(void)
// {
// 	char	sb[] = "Hello ca va";

// 	char	sl1[] = "Hello";
// 	char    sl2[] = "zzz";
// 	char    sl3[] = "Hello";
// 	char	sl4[] = "va";

// 	printf("existe : %s\n", strnstr(sb, sl1, 5));
// 	printf("nexiste pas : %s\n", strnstr(sb, sl2, 5));
// 	printf("little empty : %s\n", strnstr(sb, sl3, 0));
// 	printf("pas entiere : %s\n\n", strnstr(sb, sl4, 10));

// 	printf("/existe : %s\n", ft_strnstr(sb, sl1, 5));
// 	printf("/nexiste pas : %s\n", ft_strnstr(sb, sl2, 5));
// 	printf("/little empty : %s\n", ft_strnstr(sb, sl3, 0));
// 	printf("/pas entiere : %s\n", ft_strnstr(sb, sl4, 10));
// 	return (0);
// }
