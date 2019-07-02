/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_col_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 10:32:02 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/02 10:32:07 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_col_fd(char *colour, int nbr, int fd)
{
	ft_putstr_fd(colour, fd);
	ft_putnbr_fd(nbr, fd);
	ft_putstr_fd(RESET, fd);
}
