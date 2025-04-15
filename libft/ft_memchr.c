/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:40:22 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/06 16:19:08 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	unsigned int	i;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
//     char *str = (char *)ft_memchr(s, 2 + 256, 3);
// 	printf("%s", str);
// 	return (0);
// }
