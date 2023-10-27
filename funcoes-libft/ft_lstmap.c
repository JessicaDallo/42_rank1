/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2023/10/24 09:41:49 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 09:41:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// limpa a lista e o conteudo
void	*ft_clear(t_list *list, void *content, void (*del)(void *))
{
	if (del && content)
		del(content);
	ft_lstclear(&list, del);
	return (NULL);
}
// cria uma nova lista com o resultado da aplicação da função f
// sobre cada node da lista lst

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			return (ft_clear(new_list, content, del));
		}
		node = ft_lstnew(content);
		if (!node)
		{
			return (ft_clear(new_list, content, del));
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
