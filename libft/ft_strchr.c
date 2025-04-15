/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:45:06 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/06 15:30:05 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int		i;
	char	*ss;
	char	ch;

	i = 0;
	ss = (char *)s;
	ch = (char)c;
	while (s[i] && s[i] != ch)
		i++;
	if (s[i] != ch)
		return (NULL);
	else if (s[i] == ch)
		return (&ss[i]);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "Hellou";
	int		c;

	c = 'l';
	printf("ma fonction : %s\n", ft_strchr(s, c));
	printf("vraie fonction : %s\n", strchr(s, c));
	return (0);
}*/
