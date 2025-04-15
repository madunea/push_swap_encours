/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:40:13 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/06 15:22:52 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char * s = ft_substr("tripouille", 0, 42000);
// 	printf("%s\n", s);
// 	return (0);	
// }

// char * s = ft_substr("tripouille", 0, 42000);
// /* 2 */ mcheck(s, strlen("tripouille") + 1);

// s = ft_substr("tripouille", 1, 1);
// /* 3 */ check(!strcmp(s, "r"));

// s = ft_substr("tripouille", 100, 1);
// /* 6 */ mcheck(s, 1); free(s);

// char * str = strdup("1");
// s = ft_substr(str, 42, 42000000)
// /* 8 */ mcheck(s, 1); free(s); free(str);

// str = strdup("0123456789");
// s = ft_substr(str, 9, 10);
// /* 10  mbueno-g */ mcheck(s, 2); free(s); free(str);