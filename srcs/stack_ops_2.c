/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:36:02 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/02 10:51:56 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Increment through the stack and normalize the values for easier sorting
*/

void	normalize(t_stack **stacka)
{
	t_stack		*slow;
	t_stack		*fast;
	int			norm;

	slow = *stacka;
	while (slow)
	{
		norm = stack_size(*stacka);
		slow->norm = norm;
		fast = *stacka;
		while (fast)
		{
			if (slow->value < fast->value)
				slow->norm--;
			fast = fast->next;
		}
		slow = slow->next;
	}
}


/*
** Reads input from STD_IN, performs the operation if valid, otherwise
** frees appropriately and displays an error message
*/

void	read_input(t_stack **a, t_stack **b, t_arguments args)
{
	char	*line;
	int		count;

	count = 0;
	while (get_next_line(0, &line))
	{
		if (err_ops(line))
		{
			do_op(a, b, line);
			count++;
			(args.v) ? (visualize(*a, *b)) : NULL;
			(args.p) ? ft_putendl_col_fd(GREEN, line, 1) : NULL;
			free(line);
		}
		else
			OP_FREE;
	}
	(args.c) ? (COUNT) : NULL;
}