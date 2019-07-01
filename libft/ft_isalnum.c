/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:26:14 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 14:46:42 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Determines whether the character passed is alphanumeric or not.
** Makes use of ft_isalpha, ft_isdigit to determine result.
** Returns 0 if false or 1 if true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == TRUE) || (ft_isdigit(c) == TRUE))
		return (TRUE);
	else
		return (FALSE);
}
