/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:05:14 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/06 09:23:01 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Iterates list `lst` and applies function `f` to each link to create a new
** fresh list.
** Returns a pointer to the start of the new list, or NULL if allocation fails.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*nl_head;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(new_list = ft_lstnew(NULL, 0)))
		return (NULL);
	new_list = f(lst);
	nl_head = new_list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new_list->next = f(lst);
		new_list = new_list->next;
	}
	return (nl_head);
}
