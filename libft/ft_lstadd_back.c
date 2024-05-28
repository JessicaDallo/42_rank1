/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/20 10:30:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/20 10:30:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// procura o ultimo node de uma lista e adiciona um novo node atras
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_item;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_item = ft_lstlast(*lst);
	last_item->next = new;
}
