/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:20:54 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/05 14:05:09 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	k;
	char	*str;

	start = 0;
	k = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (start < ft_strlen(s1) && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str == NULL)
		return (NULL);
	while (k < end - start + 1)
	{
		str[k] = s1[start + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

/*int	main(void)
{
	char	s1[] = "bonj Hellobonjour bonj";
	char	set[] = "bonj";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/