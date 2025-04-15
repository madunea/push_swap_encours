/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:37:42 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/12 11:22:35 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
int	main(void)
{
	char	d[20] = "aaaaaa";
	const char	s[] = "hello world";
	size_t	i = 0;

	printf("dest before : %s\n", d);
	ft_memcpy(d, s, i);
	printf("dest after : %s\n", d);
	memcpy(d, s, i);
	printf("REALF after : %s\n", d);
	return (0);
}*/
