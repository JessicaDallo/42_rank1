/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:30:42 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/24 16:44:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

// void	ft_print_result(char const *s)
// {
// 	int		len;
// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }
//
// void	iter(unsigned int i, char *c)
// {
// 	static int indexArray[11] = {0};
// 	if (i > 10 || indexArray[i] == 1)
// 		write(1, "wrong index\n", 12);
// 	else
// 		indexArray[i] = 1;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// 	else if (*c >= 'A' && *c <= 'Z')
// 		*c = *c + 32;
// }

//roda uma função que desejamos em toda a string
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}
// int main () {
// 	char str[] = "LoReM iPsUm";
// 	ft_striteri(str, &iter);
// 	ft_print_result(str);
// 	return (0);
// }