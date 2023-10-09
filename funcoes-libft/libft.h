/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:48:44 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/09 13:11:08 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	*ft_calloc(size_t n, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);

char	*ft_strdup(const char *s);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(char c);
int		ft_atoi(const char *str);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *dest, const void *src, size_t n);

#endif