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

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>


char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strlen(const char *str);
char	*ft_strchr(const char *stash, int c);
char	*ft_read(int fd, char *stash);
char	*ft_nextl(char *stash);
//char	*ft_get_line(char *stash);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

#endif