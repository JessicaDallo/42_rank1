/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:18:05 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 15:18:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strlen(const char *str);
char	*ft_strchar(const char *stash, int c);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t n, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_gl(char *holder);
char	*ft_holder(char *holder);
char	*ft_read_and_save(int fd, char *holder);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE
# endif

#endif