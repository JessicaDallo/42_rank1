#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t	ft_strlen(char *str);

void    *ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *str1, const void *str2, size_t n);
void    *ft_memset(void *str, int c, size_t n);

char	*ft_strchr(const char *str, int c);

int ft_strncmp(char *s1, char *s2, unsigned int n);
int     ft_tolower(int c);
int ft_toupper(int c);
int	ft_isalnum(char c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

#endif
