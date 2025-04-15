/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:53:52 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/06 16:18:55 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * (-1);
		i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = (nb * 10) + nptr[i] - 48;
		i++;
	}
	return (nb * sign);
}

// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	int	original;
// 	int	mine;

// 	if (ac >= 2)
// 	{
// 		original = atoi(av[1]);
// 		mine = ft_atoi(av[1]);
// 		printf("original : %d\n  mine : %d\n", original, mine);

// 		original = atoi(av[2]);
//                 mine = ft_atoi(av[2]);
//                 printf("original : %d\n  mine : %d\n", original, mine);

// 		original = atoi(av[3]);
//                 mine = ft_atoi(av[3]);
//                 printf("original : %d\n  mine : %d\n", original, mine);
// 	}
// 	return (0);
// }
