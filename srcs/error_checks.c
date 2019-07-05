/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:44:23 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/05 09:41:36 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Determine the error message to output based on code passed
** 1 - Invalid Inputs ; 2 - Input over INT_MAX ; 3 - Input over INT_MIN ;
** 4 - Duplicate Inputs ; 5 - Incorrect Operation ;
** STDERR = fd of 2
*/

void	error_out(int code)
{
	if (code == 1)
		ft_putendl_col_fd(RED, "Error: Inputs Invalid", 2);
	if (code == 2)
		ft_putendl_col_fd(RED, "Error: Input Over INT_MAX", 2);
	if (code == 3)
		ft_putendl_col_fd(RED, "Error: Input Over INT_MIN", 2);
	if (code == 4)
		ft_putendl_col_fd(RED, "Error: Duplicate Inputs", 2);
	if (code == 5)
		ft_putendl_col_fd(RED, "Error: Incorrect Operation", 2);
}

int		err_duplicate()
{
	//TODO
}

int		err_int(const char *str)
{
	//TODO
	//if ()
}

int		err_input()
{
	//TODO
}

int		err_ops()
{
	//TODO
}