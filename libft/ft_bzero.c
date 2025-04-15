/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:52:00 by maduneau          #+#    #+#             */
/*   Updated: 2023/11/16 18:34:17 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int main() {
    char buffer[10];

    // Using bzero to set the buffer to zero
    bzero(buffer, sizeof(buffer));

    // Printing the contents of the buffer
    printf("Buffer after bzero: '%s'\n", buffer);

    return 0;
}*/