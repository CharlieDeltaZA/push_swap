/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:45:41 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 14:02:12 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates last occurrence of `c` (converted to char) in string `s`. '\0' is
** considered to be part of the string.
** Returns pointer to the located character or NULL if the character does not
** occur in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (ft_strlen(s));
	while (i >= 0 && s[i] != c)
		i--;
	if (!(s[i] == c))
		return (NULL);
	else
		return ((char*)&s[i]);
}
