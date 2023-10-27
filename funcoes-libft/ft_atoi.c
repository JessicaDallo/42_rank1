/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 17:23:01 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:01 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// faz a conversão de char to integer
int	ft_atoi(const char *str)
{
	int	i;
	int	sinal;
	int	result;

	i = 0;
	sinal = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			sinal = sinal * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sinal);
}
/*int	main(void)
{
	char x[] = " 	-1234";
	printf("%d\n", ft_atoi(x));
	printf("%d\n", atoi(x));
	return (0);
}*/