/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:32:35 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 11:13:19 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes `len` bytes of value `c` (converted to unsigned char) to string `b`
** Returns string `b`, in this case, `str`
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ((char*)b);
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
