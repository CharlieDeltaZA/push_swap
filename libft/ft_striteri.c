/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:43:25 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 16:07:29 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function `f` to each character of the string `s`, passing it's
** index as first arg. Characters passed by address to `f` to be modified if
** necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
}
