/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:33:33 by bamsyah           #+#    #+#             */
/*   Updated: 2023/04/24 09:17:07 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *rest)
{
	char		*buffer;
	ssize_t		rread;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!ft_strchr(buffer))
	{
		rread = read(fd, buffer, BUFFER_SIZE);
		if (rread == -1)
			return (free(buffer), NULL);
		buffer[rread] = '\0';
		rest = ft_strjoin(buffer, rest);
	}
	return (rest);
}

char	*ft_jibiline(char *rest)
{
	char	*str;
	int		i;

	i = 0;
	if (!rest)
		return (NULL);
	while (rest[i] != '\0' && rest[i])
		i++;
	if (rest[i] == '\n')
		i++;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (rest[i] && rest[i] != '\n')
	{
		str[i] = rest[i];
		i++;
	}
	if (rest[i] == '\n')
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}

char	*ft_get_rest(char *stash, char *line)
{
	char	*rest;
	int		i;
	int		j;

	i = ft_strlen(line);
	if (!stash[i])
		return (free(stash), NULL);
	j = 0;
	while (stash[i++])
		j++;
	rest = malloc(sizeof(char) * (j + 1));
	if (!rest)
		return (NULL);
	i = ft_strlen(line);
	j = 0;
	while (stash[i])
		rest[j++] = stash[i++];
	rest[j] = '\0';
	return (free(stash), rest);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*rest;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rest = read_file(fd, rest);
	if (!rest)
		return (NULL);
	line = ft_jibiline(rest);
	rest = ft_get_rest(rest, line);
	return (line);
}
int	main(void)
{
	int	fd = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
}
