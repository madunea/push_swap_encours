/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:13:57 by maduneau          #+#    #+#             */
/*   Updated: 2025/01/07 18:50:33 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substrings(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	ft_allocat_ss(char **tab, char const *s, char c)
{
	char		**tab_tmp;
	char const	*s_tmp;

	s_tmp = s;
	tab_tmp = tab;
	while (*s)
	{
		while (*s == c)
			s++;
		s_tmp = s;
		while (*s_tmp && *s_tmp != c)
			s_tmp++;
		if (*s_tmp == c || s_tmp > s)
		{
			*tab_tmp = ft_substr(s, 0, s_tmp - s);
			s = s_tmp;
			tab_tmp++;
		}
	}
	*tab_tmp = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tabfinal;
	int		size;
	// int		i;

	// i = 0;
	if (s == NULL)
		return (NULL);
	size = count_substrings(s, c);
	tabfinal = (char **)malloc(sizeof(char *) * (size + 1));
	if (tabfinal == NULL)
		return (NULL);
	ft_allocat_ss(tabfinal, s, c);
	return (tabfinal);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s = "                  olol  mmm";
//     char **result = ft_split(s, ' ');

// 	// char	s[] = "To be or not to be, that is the question.";
// 	// char	c = ' ';
// 	// char	**sf = ft_split(s, c);
// 	while (*result)
// 	{
// 		printf("%s\n", *result);
// 		result++;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char	**tab = ft_split("  tripouille  42  ", ' ');
// 	printf("%s", *tab);
// 	return (0);
// }

// char * * tab = ft_split("  tripouille  42  ", ' ');
// /* 1 */ mcheck(tab, sizeof(char *) * 3);

// splitme = strdup(" Tripouille");
// tab = ft_split(splitme, ' ');
// /* 22 */ mcheck(tab, sizeof(char *) * 2);

// splitme = strdup(" Tripouille ");
// tab = ft_split(splitme, ' ');
// /* 25 */ mcheck(tab, sizeof(char *) * 2);