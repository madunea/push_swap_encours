/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:11:08 by maduneau          #+#    #+#             */
/*   Updated: 2023/11/16 18:05:24 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (8);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", isalnum(120));
	printf("%d\n", ft_isalnum(120));
	return (0);
}*/
