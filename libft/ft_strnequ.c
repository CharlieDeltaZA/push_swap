/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:41:51 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 16:19:04 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison of null-terminated strings `s1` and `s2`, up to
** `n` characters or until '\0' is reached.
** Returns 1 if strings are identical or 0 if not.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
			return (0);
		i++;
	}
	return (1);
}
