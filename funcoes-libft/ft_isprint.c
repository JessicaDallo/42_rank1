/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 17:23:29 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:29 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//verifica se é um numero imprimivel
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}

//  int	main(void)
//  {
// 	int x = '{';
// 	printf("%d\n", ft_isprint(x));
// 	printf("%d\n", isprint(x));
// 	return (0);
// }