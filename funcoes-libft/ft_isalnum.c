/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 17:23:11 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:11 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//verifica se é um numero ou algarismos
int	ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*int	main(void)
{
	int x = 'a';
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", isdigit(x));
	return (0);
}*/
