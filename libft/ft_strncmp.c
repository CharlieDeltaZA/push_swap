/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:45:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 14:42:48 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicograpical comparison of the null-terminated strings `s1` & `s2`, as
** unsigned characters, where not more than `n` characters are compared.
** Returns integer greater than, equal to, or less than 0 depending on whether
** `s1` is greater than, equal to, or less than `s2`
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (TRUE);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (FALSE);
}
