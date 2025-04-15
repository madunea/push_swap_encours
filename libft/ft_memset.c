/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:43:39 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/04 15:57:33 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	while (i < n)
	{
		ss[i] = c;
		i++;
	}
	return (ss);
}

/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "marie";
	int	c = 'm';
	size_t	n = 5;
	printf("avant : %s\n", s);
	ft_memset(s, c, n);
	printf("apres : %s\n", s);
	return (0);
}*/
