/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:33:33 by bamsyah           #+#    #+#             */
/*   Updated: 2023/04/19 23:46:45 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *rest)
{
	char	*buffer;
	int		read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!ft_strchr(buffer, '\n'))
	{
		read = read(fd, buffer, BUFFER_SIZE);
		if (read == -1)
			return (free(buffer) ,NULL);
		buffer[read] = '\0';
	}
	rest = ft_strjoin(buffer, rest);
	return (rest);
}

char	*ft_jibiline(char )

char	*get_next_line(int fd);
{
	static char	*rest;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rest = read_file(fd, rest);
	if (!rest)
		return (NULL);
	line = ft_jibiline(rest);
}


// BUFFER_SIZE = 3;
// abcdefg
// hgduadkk
// fufeaa
// hj


// rest = abcdefg\nh
