/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:25:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/28 17:25:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *input, ...);
int	ft_typedef(va_list list, const char type);
int	ft_putchar(char c);
int	ft_putint(int nbr);
int	ft_putstr(char *s);
int	ft_putuns(unsigned int nbr);
int	ft_puthexa(unsigned int nbr, char type);
int	ft_putptr(unsigned long long ptr);
int	ft_count_nbr(long int nb);

#endif
