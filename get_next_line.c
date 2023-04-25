/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:33:33 by bamsyah           #+#    #+#             */
/*   Updated: 2023/04/25 14:19:09 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *rest)
{
	char		*buffer;
	ssize_t		rread;

	buffer = ft_calloc(BUFFER_SIZE + 1, 1);
	if (!buffer)
		return (NULL);
	rread = 1;
	while (!ft_strchr(buffer) && rread != 0)
	{
		rread = read(fd, buffer, BUFFER_SIZE);
		if (rread == -1)
		{
			free(buffer);
			free(rest);
			rest = NULL;
			return (NULL);
		}
		buffer[rread] = '\0';
		rest = ft_strjoin(buffer, rest);
	}
	free(buffer);
	return (rest);
}

char	*ft_jibiline(char *rest)
{
	char	*str;
	int		i;

	i = 0;
	if (!rest)
		return (NULL);
	while (rest[i] != '\n' && rest[i])
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

char	*ft_jibirest(char *rest, char *line)
{
	char	*rrest;
	int		i;
	int		j;

	i = ft_strlen(line);
	if (rest[0] == '\0')
		return (free(rest), NULL);
	j = 0;
	while (rest[i++])
		j++;
	rrest = malloc(sizeof(char) * (j + 1));
	if (!rrest)
		return (NULL);
	i = ft_strlen(line);
	j = 0;
	while (rest[i])
		rrest[j++] = rest[i++];
	rrest[j] = '\0';
	return (free(rest), free(line), rrest);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*rest = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rest = read_file(fd, rest);
	if (rest == NULL)
		return (NULL);
	line = ft_jibiline(rest);
	if (line == NULL)
		return (NULL);
	rest = ft_jibirest(rest, line);
	if (rest == NULL)
		return (NULL);
	return (line);
}

// int main()
// {
// 	int fd = open("test.txt", O_RDONLY);
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	// system("leaks a.out");
// }
