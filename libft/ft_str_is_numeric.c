/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 13:40:34 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/08 16:43:51 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks whether the entire string that is passed is numeric or not.
** If it encounters a non-numeric character it returns 0, otherwise returns 1
*/

int		ft_str_is_numeric(const char *str)
{
	int	check;

	check = 0;
	while ((ft_isdigit(*str) || *str == '-') && *str)
	{
		if (*str == '-')
			check += 1;
		str++;
	}
	if (*str || check > 1)
		return (FALSE);
	return (TRUE);
}
