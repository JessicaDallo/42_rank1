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

void	ft_putstr_fd(char *s, int fd)
{
	while (s && *s)
	{
		write (fd, s, 1);
		s++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return ;
}


int	ft_typedef(va_list list, int input)
{
	if ('c' == input)
		return (ft_putchar_fd(va_arg(list, int)), 1);
	else if ('s' == input)
		return (ft_putstr_fd(va_arg(list, char *), 1));
	else if ('p' == input)
		return (ft_putptr(va_arg(list, void*)));
	else if ('d' == input || 'i' == input)
		//imprime um integer tipo int
	else if ('u' == input)
		//imprime um int sem sinal tipo unsigned int 
	else if ('x' == input)
		//imprime um hexadecimal minusculo tipo int ou unsigned int 
	else if ('X' == input)
		//imprime um hexadecimal maiusculo tipo int ou unsigned int
	else if ('%')
		//imprime uma por centagem literal tipo nenhum
	return (0);
}




int	ft_printf(const char *input, ...)
{
	va_list	list_arg;

	va_start(list_arg, input);
	if (*input == '%')
	{
		input++;
		if(*input != '%' && *input)
			ft_type_def(list_arg, input);
	}
}