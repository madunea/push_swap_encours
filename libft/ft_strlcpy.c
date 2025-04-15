/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:13:33 by maduneau          #+#    #+#             */
/*   Updated: 2023/11/21 16:30:43 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	dest[15] = "blabla";
	const char	srce[] = "Hello you!!";

	printf("dst avant : %s\n", dest);
	ft_strlcpy(dest, srce, 15);
	printf("dst apres : %s\n", dest);
	strlcpy(dest, srce, 15);
	printf("strlcpy : %s\n", dest);
	return (0);
}*/
