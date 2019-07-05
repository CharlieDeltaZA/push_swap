/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:44:23 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/05 21:11:59 by cdiogo           ###   ########.fr       */
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

	exit(1);
}

void	err_duplicate()
{
	//TODO
}

void	err_int(const char *str)
{
	//TODO -- Done?
	if (ft_atol(str) > 2147483647)
		error_out(2);
	if (ft_atol(str) < -2147483648)
		error_out(3);
}

void	err_input(const char *str)
{
	//TODO -- Done?
	if (ft_str_is_numeric(str) != 1)
		error_out(1);
}

void	err_ops()
{
	//TODO
}