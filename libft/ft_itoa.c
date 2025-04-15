/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maduneau <maduneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:53:52 by maduneau          #+#    #+#             */
/*   Updated: 2023/12/04 15:56:51 by maduneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	long_n;

	long_n = n;
	if (n < 0)
		long_n *= (-1);
	len = count_digits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = 0;
	if (long_n == 0)
		str[0] = '0';
	else
	{
		while (len--, long_n != 0)
		{
			str[len] = (long_n % 10) + '0';
			long_n = (long_n - (long_n % 10)) / 10;
		}
		if (n < 0)
			str[len] = '-';
	}
	return (str);
}

/*int	main(void)
{
	printf("%s", ft_itoa(-12345));
	return (0);
}*/

/*
//Negative numbers must be handled.

ATOI : ascii -> integer
	nb = (nb * 10) + nptr[i] - 48 		// 48 == \0
	string (integer in ascii format) -> nb (actual integer)
ITOA : integer -> ascii
	nb = nb = (nb / 10) + nptr[i] + 48
	nb -> string
*/