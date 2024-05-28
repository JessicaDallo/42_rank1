/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/10/19 07:49:24 by marvin            #+#    #+#             */
/*   Updated: 2023/10/19 07:49:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// cria um novo node da lista
t_list	*ft_lstnew(void *content)
{
	t_list	*list1;

	list1 = (t_list *)malloc(sizeof(t_list));
	if (!list1)
		return (NULL);
	list1->content = content;
	list1->next = NULL;
	return (list1);
}

// int main(void)
// {
// 	char	*str;
// 	t_list	*item1;

// 	str = "jessica";
// 	item1 = ft_lstnew((void *)str);
// 	printf("%s\n",(char *)item1->content);
// 	free(item1);
// }