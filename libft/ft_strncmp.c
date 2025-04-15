/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:18:50 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/04 16:03:57 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n && (ss1[i] || ss2[i]))
	{
		if (ss1[i] == ss2[i])
			i++;
		else
			return (ss1[i] - ss2[i]);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int    a;
	char    s1[] = "Hello";
		char    s2[] = "HeLlo";
	a = 3;
	printf("%d\n", ft_strncmp(s1, s2, a));
	printf("%d\n", strncmp(s1, s2, a));
	return (0);
}*/
