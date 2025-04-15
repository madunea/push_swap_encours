/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:04:45 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/12 11:18:00 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;
	int		i;

	if (f == NULL || s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		str[i] = (*f)(i, *s);
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	str[] = "hello tout le monde";
	char	*strfinal = ft_strmapi(str, myfunctionupper);

	printf("Original string: %s\n", str);
	printf("Mapped string  : %s\n", strfinal);
	free(strfinal);
	return (0);
}*/
