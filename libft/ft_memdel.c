/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:32:23 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 15:32:13 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Frees an area of memory pointed to by `*ap`, before setting that pointer to
** NULL.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap == NULL)
		return ;
	else
	{
		free(*ap);
		*ap = NULL;
	}
}
