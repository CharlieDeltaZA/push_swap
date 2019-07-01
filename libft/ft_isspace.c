/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:42:34 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 09:48:05 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Determines whether the character passed is a {space, tab, carriage return,
** form feed (page break), new line, vertical tab} or not.
*/

#include "libft.h"

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\r' || c == '\f' || c == '\n'
			|| c == '\v')
		return (TRUE);
	return (FALSE);
}
