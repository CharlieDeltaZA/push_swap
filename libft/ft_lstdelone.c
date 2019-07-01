/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 09:59:03 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/06 08:59:45 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes a pointer to a link, and frees the link content with function `del`.
** Also frees link memory with Free. Pointer to link finally set to NULL.
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	list = *alst;
	del(list->content, list->content_size);
	free(list);
	*alst = NULL;
}
