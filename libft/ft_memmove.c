/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:06:08 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/12 11:22:51 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (n == 0 || src == dst)
		return (dst);
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst < src || dst >= (src + n))
		d = ft_memcpy(d, s, n);
	if (dst > src)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dst);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char		*d;
// 	const unsigned char	*s;

// 	if (!dest && !src)
// 		return (NULL);
// 	if (dest < src)
// 	{
// 		d = (unsigned char *)dest;
// 		s = (const unsigned char *)src;
// 		while (n--)
// 			*d++ = *s++;
// 	}
// 	else
// 	{
// 		d = (unsigned char *)dest + (n - 1);
// 		s = (const unsigned char *)src + (n - 1);
// 		while (n--)
// 			*d-- = *s--;
// 	}
// 	return (dest);
// }

/*
#include <stdio.h>

int	main(void)
{
	char	s[] = " ";
	char	d[20] = "mamamiaaaaaaaaa";

	printf("Before : %s\n", d);
	ft_memmove(d, s, 1);
	printf("After : %s\n\n", d);
	memmove(d, s, 1);
	printf("origiale : %s\n", d);
	return (0);
}
*/