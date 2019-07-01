/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:39:13 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 13:59:02 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates first occurrence of `c` (converted to char) in string `s`. '\0' is
** considered to be part of the string.
** Returns pointer to the located character or NULL if the character does not
** occur in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i < (ft_strlen(s)) && s[i] != c)
		i++;
	if (!(s[i] == c))
		return (NULL);
	else
		return ((char*)&s[i]);
}
