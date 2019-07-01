/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:35:13 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 16:57:31 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs character `c` to the standard output. Uses ft_putchar_fd, passing
** 1 as the file descriptor.
*/

#include "libft.h"

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}
