/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:33:52 by bamsyah           #+#    #+#             */
/*   Updated: 2023/04/24 09:14:18 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*ft_get_rest(char *stash, char *line);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(char *str);
char	*ft_strdup(char *rest);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *buffer);
char	*read_file(int fd, char *rest);
char	*get_next_line(int fd);
char	*ft_jibiline(char *rest);

#endif
