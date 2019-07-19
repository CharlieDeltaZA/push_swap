/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:07:01 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/19 09:54:30 by cdiogo           ###   ########.fr       */
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
	int		l1_val;
	int		l2_val;
	int		l3_val;

	node = *stack_a;
	l1_val = node->value;
	l2_val = node->next->value;
	l3_val = node->next->next->value;
	if (l1_val > l3_val && l3_val > l2_val)
		ft_putendl_fd("ra", 1);
	else if (l3_val < l1_val && l3_val < l2_val)
		ft_putendl_fd("rra", 1);
	else if (l1_val > l2_val && l1_val < l3_val)
		ft_putendl_fd("sa", 1);
}
