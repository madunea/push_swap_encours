/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:54:22 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/05 17:48:57 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	char	*ss;
	char	cc;
	size_t	len;

	len = ft_strlen(s);
	i = len;
	ss = (char *)s;
	cc = (char)c;
	while (i >= 0)
	{
		if (s[i] == cc)
			return (&ss[i]);
		i--;
	}	
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "Heyyyou";

	printf("ORIGINAL, C is : %s\n", strrchr(s, 'y'));
	printf("ORIGINAL, C is not : %s\n", strrchr(s, 'z'));
	printf("ORIGINAL, end : %s\n\n", strrchr(s, '\0'));

	printf("MINE, C is : %s\n", ft_strrchr(s, 'y'));
	printf("MINE, C is not : %s\n", ft_strrchr(s, 'z'));
	printf("MINE, end : %s\n", ft_strrchr(s, '\0'));
	retur*/
