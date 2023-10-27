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

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
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

// int main()
// {
// 	int	x = 1995;
// 	int	y = -1995;
// 	printf("%s", ft_itoa(i));
// 	printf("%s", ft_itoa(j));
//	return (0);
// }
