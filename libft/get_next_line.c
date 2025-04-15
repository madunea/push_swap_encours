/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:44:00 by maduneau          #+#    #+#             */
/*   Updated: 2025/01/07 18:51:38 by marieduneau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_full_line(int fd, char *buffer, char *full_line)
{
	char	*temp;
	size_t	bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if ((int)bytes_read == -1)
			return (0);
		else if ((int)bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!full_line)
			full_line = ft_strdup("");
		temp = full_line;
		full_line = ft_strjoin(temp, buffer);
		free(temp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (full_line);
}

char	*extract_after_n(char *line)
{
	int		i;
	size_t	len;
	char	*line_after_n;

	len = ft_strlen(line);
	i = 0;
	while (line[i] != '\n' && line[i])
		i++;
	if (line[i] == '\0' || line[i + 1] == '\0')
		return (NULL);
	line_after_n = ft_substr(line, i + 1, len - i);
	if (!line_after_n)
	{
		free(line_after_n);
		return (0);
	}
	line[i + 1] = '\0';
	return (line_after_n);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*line_after_n;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	line = get_full_line(fd, buffer, line_after_n);
	free(buffer);
	if (!line)
		return (NULL);
	line_after_n = extract_after_n(line);
	return (line);
}
