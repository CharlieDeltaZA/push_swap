/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:41:11 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 15:51:19 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Frees a string pointed to by `*as`, before setting that pointer to NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
