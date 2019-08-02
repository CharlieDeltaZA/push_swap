/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:36:12 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/02 10:56:36 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs integer `n` to the standard output. Uses ft_putnbr_fd, passing 1 as
** the file descriptor. Puts a newline after printing the number.
*/

#include "libft.h"

void	ft_putnbr_nl(int n)
{
	ft_putnbr_fd(n, 1);
	ft_putendl("");
}
