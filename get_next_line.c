/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:33:33 by bamsyah           #+#    #+#             */
/*   Updated: 2023/04/14 15:49:43 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *rest)
{
	char	*buffer;
	buffer = malloc(sizeof(char * (BUFFER_SIZE + 1)));
	if (!buffer)
		return (NULL);
	while (!(ft_strchr(buffer, '\n')))
	{

	}

}

char	*get_next_line(int fd);
{
	static char	*rest;
	char		*temp;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	temp = read_file(fd, rest);
}
