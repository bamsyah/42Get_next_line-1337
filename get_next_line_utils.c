/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:37:00 by bamsyah           #+#    #+#             */
/*   Updated: 2023/04/24 09:10:30 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *buffer, char *rest)
{
	char	*jma3;
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (!buffer)
		return (NULL);
	if (rest == NULL)
		return (ft_strdup(buffer));
	jma3 = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(rest)) + 1);
	if (!jma3)
		return (NULL);
	while (rest[i])
	{
		jma3[i] = rest[i];
		i++;
	}
	while (buffer[y])
	{
		jma3[i++] = buffer[y++];
	}
	jma3[i] = '\0';
	return (free(buffer), jma3);
}

char	*ft_strdup(char *str)
{
	char	*sstr;
	int		i;

	i = 0;
	sstr = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!sstr)
		return (NULL);
	while (str[i])
	{
		sstr[i] = str[i];
		i++;
	}
	sstr[i] = '\0';
	return (sstr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
