/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:48:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/20 15:30:21 by cdiogo           ###   ########.fr       */
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

	if (size == 2 && ac == 2)
	{
		i = -1;
		while (++i < size)
			ERR_INT_INPUT;
		err_duplicate_arr(size, av);
	}
	else if (size == ac)
	{
		i = 0;
		while (++i < ac)
			ERR_INT_INPUT;
		err_duplicate(ac, av);
	}
	else
	{
		i = -1;
		while (++i < size)
			ERR_INT_INPUT;
		err_duplicate_arr(size, av);
	}
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

size_t	stack_size(t_stack *head)
{
	size_t	i;
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
