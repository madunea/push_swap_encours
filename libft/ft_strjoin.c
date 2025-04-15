/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:52:11 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/05 10:44:42 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strjoin = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (strjoin == NULL)
		return (NULL);
	ft_strlcpy(strjoin, s1, len1 + 1);
	ft_strlcat(strjoin, s2, len1 + len2 + 1);
	return (strjoin);
}

/*int	main(void)
{
	char	*join;
	char	s1[5] = "Hello";
	char	s2[3] = "you";

	//printf("join before : %s\n", join);
	join = ft_strjoin(s1, s2);
	printf("after : %s\n", join);
	return (0);
}*/

// {	char	*strjoin;
// 	size_t	len1;
// 	size_t	len2;
// 	size_t	i;
// 	size_t	j;

// 	if (s1 == NULL || s2 == NULL)
// 		return (NULL);
// 	len1 = ft_strlen(s1);
// 	len2 = ft_strlen(s2);
// 	strjoin = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
// 	if (strjoin == NULL)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// 	{
// 		strjoin[j] = s1[i];
// 		i++;
// 		j++;
// 	}
// 	i = 0;
// 	while (s2[i])
// 	{
// 		strjoin[j] = s2[i];
// 		i++;
// 		j++;
// 	}
// 	strjoin[j] = '\0';
// 	return (strjoin);
// }