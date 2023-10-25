/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/06 16:39:33 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 16:39:33 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//conta quantos caracteres contem na str
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int  main(void)
// {
//      char x[] = "jessica";
//      printf("%zu\n", ft_strlen(x));
//      printf("%zu\n", strlen(x));
//      return (0);
// }