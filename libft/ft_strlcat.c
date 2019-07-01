/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:44:13 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 12:49:51 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends `src` to end of `dst`. Appends at most (`dstsize` - strlen(`dst`)-1)
** It will NUL-terminate unless `dstsize` == 0 or `dst` longer than `dstsize`.
** Returns the total length of the string that was created (initial length of
** `dst` + strlen(`src`))
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = 0;
	while ((dst[dstlen] != '\0') && dstlen < dstsize)
		dstlen++;
	i = dstlen;
	while ((src[dstlen - i] != '\0') && (dstlen + 1 < dstsize))
	{
		dst[dstlen] = src[dstlen - i];
		dstlen++;
	}
	if (i < dstsize)
		dst[dstlen] = '\0';
	return (i + ft_strlen(src));
}
