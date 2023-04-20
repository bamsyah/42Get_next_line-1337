/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:37:00 by bamsyah           #+#    #+#             */
/*   Updated: 2023/04/19 23:54:27 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *buffer, int c)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == c)
			return (1);
		i++
	}
	return (0);
}

char	*ft_strjoin(char *buffer, char *rest)
{
	int		i;
	int		y;
	char	*jma3;

	i = 0;
	y = 0;
	if (!buffer)
		return (NULL);
	if (!rest)
		rest = ft_strdup();
	jma3 = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(rest)) + 1);
	if (!jma3)
		return (NULL);
	while (rest[i])
	{
		jma3[i++] = rest[i++];
	}
	while (buffer[y])
	{
		jma3[i++] = buffer[y++];
	}
	jma3[i] = '\0';
	return (free(buffer), free(rest), jma3);
}

char	*ft_strdup(void)
{
	char	*str;

	str = malloc(1);
	str[1] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
