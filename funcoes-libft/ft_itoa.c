/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:25:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 19:25:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

//faz a conversão de integer para char
int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_size(n);
	str = (char *) malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = '\0';
	if (n == 0)
		str[size - 1] = '0';
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		str[size - 1] = ft_abs(n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (str);
}

// void	ft_putchar_fd(char c, int fd)
// {
// 	write (fd, &c, 1);
// }

// void	ft_putstr_fd(char *s, int fd)
// {
// 	while (*s)
// 	{
// 		write (fd, s, 1);
// 		s++;
// 	}
// }

// int main()
// {
// 	int	i = 0;
// 	int	j = -814;
// 	int	min = -2147483648;
// 	int	max = 2147483647;
// 	ft_putstr_fd(ft_itoa(i), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(ft_itoa(j), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(ft_itoa(min), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(ft_itoa(max), 1);
// 	ft_putchar_fd('\n', 1);
// }
