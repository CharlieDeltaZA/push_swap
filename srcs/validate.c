/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:48:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/15 10:28:33 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Perform error checking on the input values. Validate() calls 3 functions to
** ensure that there are no duplicates, no invalid inputs and no breaches of
** limits of an INT.
*/

void	validate(int size, int ac, char **av)
{
	int	i;

	if (size == ac)
	{
		i = 1;
		while (i < ac)
		{
			err_input(av[i]);
			err_int(av[i]);
			i++;
		}
		err_duplicate(ac, av);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			err_input(av[i]);
			err_int(av[i]);
			i++;
		}
		err_duplicate(size, av);
	}
}

/*
** Check whether the function has been sorted and return a value to allow
** printing of an appropriate message.
*/

int		check_sorted(t_stack *stack_a)
{
	t_stack	*tmp;
	int		temp;

	if (!stack_a)
		return (FEELSBADMAN);
	tmp = stack_a;
	while (stack_a->next)
	{
		temp = stack_a->value;
		stack_a = stack_a->next;
//		printf("temp: %d   value: %d\n", temp, stack_a->value);
		if (temp > stack_a->value)
			return (FEELSBADMAN);
	}
	return (FEELSGOODMAN);
}

/*
** Get the size of the list (stack)
*/

size_t	stack_size(t_stack *head)
{
	size_t	i;
	t_stack	*list;

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
** Returns the size of an array. [???In this case (size + 1) to replicate argc???]
*/

int		arr_size(char **array)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (array[i] != '\0')
		size++;
	return (size);
}
