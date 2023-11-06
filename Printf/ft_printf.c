/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:29:16 by marvin            #+#    #+#             */
/*   Updated: 2023/10/28 17:29:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// #include "ft_typedef.c"
// #include "ft_putchar.c"
// #include "ft_putstr.c"
// #include "ft_putptr.c"
// #include "ft_putint.c"
// #include "ft_puthexa.c"
// #include "ft_count_nbr.c"
// #include "ft_putuns.c"

int	ft_printf(const char *input, ...)
{
	va_list	list_arg;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(list_arg, input);
	while (input[j])
	{
		if (input[j] == '%')
		{
			i = i + ft_typedef(list_arg, input[j + 1]);
			j++;
		}
		else
			i = i + ft_putchar(input[j]);
		j++;
	}
	va_end (list_arg);
	return (i);
}
// int main ()
// {
// 	char *ptr = 42;

// 	ft_printf("vai imprimir um decimal inteiro: %d\n", 1.0);
// 	ft_printf("vai imprimir um inteiro: %i\n", 10);
// 	ft_printf("vai imprimir um caractere: %c\n", 'j');
// 	ft_printf("vai imprimir uma string: %s\n", "We are the future! Live today!");
// 	ft_printf("vai imprimir um ponteiro: %p\n", ptr);
// 	ft_printf("vai imprimir um unsigned: %u\n", 42);
// 	ft_printf("vai imprimir um hexadecimal inteiro: %x\n", 255);
// 	ft_printf("vai imprimir um hexadecimal maiusculo: %X\n", 255);
// 	ft_printf("vai imprimir uma porcentagem: %%\n");
// 	return (0);
// }