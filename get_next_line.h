/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:33:52 by bamsyah           #+#    #+#             */
/*   Updated: 2023/04/19 23:46:23 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE
# define	GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef	BUFFER_SIZE
#  define	BUFFER_SIZE 6
# endif

int	ft_strlen(char *str);
char	*ft_strdup(char *rest);
char	*ft_strjoin(char *buffer, char *rest);
char	*ft_strchr(char *buffer, int c)
char	*read_file(int fd, char *rest);
char	*get_next_line(int fd);

#endif
