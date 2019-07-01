/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:31:36 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 15:08:51 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates `size` bytes of memory. Allocated memory initialized to 0
** Returns pointer to allocated area, or NULL if allocation fails.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if (!(ptr = malloc(size)))
		return (NULL);
	else
	{
		ft_memset(ptr, '\0', size);
		return (ptr);
	}
}
