/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:44:23 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/12 09:13:34 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Determine the error message to output based on code passed
** 1 - Invalid Inputs ; 2 - Input Over INT_MAX ; 3 - Input Under INT_MIN ;
** 4 - Duplicate Inputs ; 5 - Incorrect Operation ; 6 - Incorrect Arg ;
** STDERR = fd of 2
*/

void	error_out(int code)
{
	if (code == INPUT)
		ft_putendl_col_fd(RED, "Error: Invalid Input", 2);
	if (code == MAXSIZE)
		ft_putendl_col_fd(RED, "Error: Input Over INT_MAX", 2);
	if (code == MINSIZE)
		ft_putendl_col_fd(RED, "Error: Input Under INT_MIN", 2);
	if (code == DUPE)
		ft_putendl_col_fd(RED, "Error: Duplicate Inputs", 2);
	if (code == OPS)
		ft_putendl_col_fd(RED, "Error: Incorrect Operation", 2);
	if (code == ARGS)
		ft_putendl_col_fd(RED, "Error: Incorrect Arg", 2);
	exit(1);
}

/*
** Determines whether there are any duplicate numbers in the argv input,
** and outputs an appropriate error and exits if there are.
*/

int		err_duplicate(int ac, char **av)
{
	int		i;
	int		k;
	int		*args;

	i = 0;
	args = (int*)malloc(ac * sizeof(int));
	while (i < ac)
	{
		args[i] = ft_atoi(av[i]);
		i++;
	}
	i = 0;
	while (i < (ac - 1))
	{
		k = i + 1;
		while (k < ac)
		{
			if (args[i] == args[k])
				return (FEELSBADMAN);
			k++;
		}
		i++;
	}
	free(args);
	return (FEELSGOODMAN);
}

/*
** Determines whether there are any numbers that are greater than INT_MAX
** or smaller than INT_MIN in the argv input and outputs an appropriate error
** and exits if there are.
*/

int		err_int(const char *str)
{
	if (ft_atol(str) > 2147483647)
		return (MAXSIZE);
	if (ft_atol(str) < -2147483648)
		return (MINSIZE);
	return (0);
}

/*
** Determines whether there are any non-numeric inputs in the argv input string
** and outputs an appropriate error and exits if there are.
*/

int		err_input(const char *str)
{
	if (ft_str_is_numeric(str) != 1)
		return (FEELSBADMAN);
	return (FEELSGOODMAN);
}

/*
** Determines whether the operations given are valid or not and outputs an
** appropriate error and exits if there are, otherwise calls the function
** to be run.
*/

int		err_ops(char *op)
{
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
	return (0);
}
