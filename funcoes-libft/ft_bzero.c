/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 17:23:07 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:07 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//percorre a str com a função do memset e coloca o valor nulo em toda str.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*int	main(void)
{
		char str[] = "oito";
		ft_bzero(str, 4);
		printf("%s\n", str);
	return (0);
}*/