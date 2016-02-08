/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 17:07:29 by baalbane          #+#    #+#             */
/*   Updated: 2016/02/08 20:13:21 by baalbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

# define BUFF_SIZE 9

char	*newbuffer(int const fd, char *buffer, int *ret);
int		get_next_line(int const fd, char **line);
char	**tabmalloc(char **buffer, int fd);
char	**testbuffer(char **buffer, int fd);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
int		ft_freetab(char **tab);

#endif
