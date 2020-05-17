/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:48:50 by cdiogo            #+#    #+#             */
/*   Updated: 2020/05/17 12:46:07 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Perform error checking on the input values. Validate() calls 3 functions to
** ensure that there are no duplicates, no invalid inputs and no breaches of
** limits of an INT.
*/

void	validate(int ac, char **av, int check)
{
	int	i;
	int	ret;

	i = 0;
	while (av[i])
	{
		if (!(ret = err_input(av[i])))
		{
			// CHECK;
			(check) ? (array_free(av)) : NULL;
			error_out(INPUT);
		}
		ret = err_int(av[i]);
		if (ret == MAXSIZE || ret == MINSIZE)
		{
			// CHECK;
			(check) ? (array_free(av)) : NULL;
			error_out(ret);
		}
		i++;
	}
	if (!(ret = err_duplicate(ac, av)))
	{
		// CHECK;
		(check) ? (array_free(av)) : NULL;
		error_out(DUPE);
	}
}

/*
** Checks whether the first av value is a string or not, by looking for at
** least one space in the input.
*/

int		is_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

/*
** Check whether the function has been sorted and return a value to allow
** printing of an appropriate message.
*/

int		check_sorted(t_stack *stack_a)
{
	t_stack	*node;
	int		temp;

	if (!stack_a)
		return (FEELSBADMAN);
	node = stack_a;
	while (node->next)
	{
		temp = node->value;
		node = node->next;
		if (temp > node->value)
			return (FEELSBADMAN);
	}
	return (FEELSGOODMAN);
}

/*
** Get the size of the list (stack)
*/

int		stack_size(t_stack *head)
{
	int		i;
	t_stack	*list;

	if (!head)
		return (0);
	list = head;
	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

/*
** Returns the size of an array.
*/

int		arr_size(char **array)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (array[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}
