/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:38:54 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/12 11:37:31 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0;
	srclen = ft_strlen(src);
	if (dst)
		dstlen = ft_strlen(dst);
	if (dstlen + 1 < size)
		ft_strlcpy(dst + dstlen, src, size - dstlen);
	if (dstlen < size)
		return (dstlen + srclen);
	return (size + srclen);
}

/*
int	main(void)
{
	char	dst[] = "Hello";
	const char	src[] = "my love";

	printf("%s\n", dst);
	ft_strlcat(dst, src, 15);
	printf("%s\n", dst);
	return (0);

expl:
if (dstlen + 1 < size) --enough space for entire source string (src) and '\0'
		ft_strlcpy(dst + dstlen, src, size - dstlen);
if (dstlen < size) --enough space for at least 1 character of src
		return (dstlen + srclen);
return (size + srclen); --total lengh that would have been, not enough space
*/
