/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:44:18 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 12:38:05 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends not more than `n` characters of null-terminated string `s2` to the
** end of `s1` (also null-terminated), and adds a terminating '\0'.
** `s1` must have enough space to hold the end result.
** Returns pointer to `s1`
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	lens1;
	size_t	i;

	i = 0;
	lens1 = (ft_strlen(s1));
	while (s2[i] != '\0' && i < n)
	{
		s1[lens1] = s2[i];
		i++;
		lens1++;
	}
	s1[lens1] = '\0';
	return (s1);
}
