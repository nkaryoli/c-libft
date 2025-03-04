/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:27:55 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/16 18:08:16 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_nodo;
	t_list	*content;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = (*f)(lst -> content);
		new_nodo = ft_lstnew(content);
		if (!new_nodo)
		{
			free(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_nodo);
		lst = lst -> next;
	}
	return (new_lst);
}
