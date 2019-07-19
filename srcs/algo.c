/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:07:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/19 12:45:28 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_this_bitch(t_stack **head_a, t_stack **head_b)
{
	//YIKES - THIS IS JUST BUBBLE SORT
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = *head_a;
	stack_b = *head_b;
	
}


void	sort_3(t_stack **stack_a)
{
	//TODO
	t_stack	*node;
	int		l1;
	int		l2;
	int		l3;

	node = *stack_a;
	l1 = node->value;
	l2 = node->next->value;
	l3 = node->next->next->value;
	if (l1 > l2 && l1 > l3 && l3 < l2)
	{
		ft_putendl_col_fd(CYAN, "sa", 1);
		sa(stack_a);
		ft_putendl_col_fd(CYAN, "rra", 1);
		rra(stack_a);
	}
	else if (l1 < l2 && l2 > l3 && l3 > l1)
	{
		ft_putendl_col_fd(CYAN, "sa", 1);
		sa(stack_a);
		ft_putendl_col_fd(CYAN, "ra", 1);
		rra(stack_a);
	}
	else if (l1 > l2 && l1 < l3 && l3 > l2)
	{
		ft_putendl_col_fd(CYAN, "sa", 1);
		sa(stack_a);
	}
	else if (l1 > l3 && l3 > l2 && l1 > l2)
	{
		ft_putendl_col_fd(CYAN, "ra", 1);
		ra(stack_a);
	}
	else if (l3 < l1 && l3 < l2 && l1 < l2)
	{
		ft_putendl_col_fd(CYAN, "rra", 1);
		rra(stack_a);
	}
	// if (!(check_sorted(*stack_a)))
	// 	sort_3(stack_a);
}
