/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessicadallo <jessicadallo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:23:33 by jessicadall       #+#    #+#             */
/*   Updated: 2023/10/06 17:23:33 by jessicadall      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

//void *memchr (const void *str, int c, size_t n)


int main ()
{
 	const char str[] = "jessica gosta de arroz";
 	const char ch = 'a';

 	printf ("%s\n", memchr(str, ch, 7));
 	return 0;
}