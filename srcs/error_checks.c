/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:44:23 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/06 21:58:52 by cdiogo           ###   ########.fr       */
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
	if (code == INPUT)
		ft_putendl_col_fd(RED, "Error: Inputs Invalid", 2);
	if (code == MAXSIZE)
		ft_putendl_col_fd(RED, "Error: Input Over INT_MAX", 2);
	if (code == MINSIZE)
		ft_putendl_col_fd(RED, "Error: Input Over INT_MIN", 2);
	if (code == DUPE)
		ft_putendl_col_fd(RED, "Error: Duplicate Inputs", 2);
	if (code == OPS)
		ft_putendl_col_fd(RED, "Error: Incorrect Operation", 2);

//	exit(1);
}

/*
** Determines whether there are any duplicate numbers in the argv input,
** and outputs an appropriate error and exits if there are.
*/

void	err_duplicate(int ac, char **av)
{
	//TODO -- Done?
	int		i;
	int		j;
	int		k;
	int		*args;

	i = 1;
	j = 0;
	args = (int*)malloc((ac - 1) * sizeof(int));
	while (i < ac)
	{
		args[j] = ft_atoi(av[i]);
		j++;
		i++;
	}
	i = 0;
	while (i < ac - 1)
	{
		k = i + 1;
		while (k < ac)
		{
			if (args[i] == args[k])
				error_out(DUPE);
			k++;
		}
		i++;
	}
	free(args);
}

/*
** Determines whether there are any numbers that are greater than INT_MAX
** or smaller than INT_MIN in the argv input and outputs an appropriate error
** and exits if there are.
*/

void	err_int(const char *str)
{
	//TODO -- Done?
	if (ft_atol(str) > 2147483647)
		error_out(MAXSIZE);
	if (ft_atol(str) < -2147483648)
		error_out(MINSIZE);
}

/*
** Determines whether there are any non-numeric inputs in the argv input string
** and outputs an appropriate error and exits if there are.
*/

void	err_input(const char *str)
{
	//TODO -- Done?
	if (ft_str_is_numeric(str) != 1)
		error_out(INPUT);
}

/*
** Determines whether the operations given are valid or not and outputs an
** appropriate error and exits if there are, otherwise calls the function
** to be run.
*/

int		err_ops(char *op)
{
	//TODO -- Done??
	if (ft_strequ(op, "pa"))
		return (1);
	else if (ft_strequ(op, "pb"))
		return (1);
	else if (ft_strequ(op, "sa"))
		return (1);
	else if (ft_strequ(op, "sb"))
		return (1);
	else if (ft_strequ(op, "ra"))
		return (1);
	else if (ft_strequ(op, "rb"))
		return (1);
	else if (ft_strequ(op, "rra"))
		return (1);
	else if (ft_strequ(op, "rrb"))
		return (1);
	else if (ft_strequ(op, "ss"))
		return (1);
	else if (ft_strequ(op, "rr"))
		return (1);
	else if (ft_strequ(op, "rrr"))
		return (1);
	else
		error_out(OPS);
	return (0);
}