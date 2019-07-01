/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:32:29 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 11:21:06 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies `len` bytes from string `src` to `dst`. Copy is always done in a non-
** destructive manner. Strings may overlap.
** Returns original value of `dst`
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	char		*source;
	int			x;

	dest = (char*)dst;
	source = (char*)src;
	i = 0;
	x = ((int)len - 1);
	if (dest == source && len > 0)
		return (NULL);
	if (source < dest)
		while (x >= 0)
		{
			dest[x] = source[x];
			x--;
		}
	else
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	return (dst);
}
