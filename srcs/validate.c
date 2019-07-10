/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:48:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/10 16:14:26 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Perform error checking on the input values. Validate() calls 3 functions to
** ensure that there are no duplicates, no invalid inputs and no breaches of
** limits of an INT.
*/

void	validate(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		err_input(av[i]);
		err_int(av[i]);
		i++;
	}
	err_duplicate(ac, av);
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
