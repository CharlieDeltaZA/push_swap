/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_helper_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:36:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/07 14:32:30 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Finds largest number in stack
*/

int		find_largest(t_stack **head)
{
	t_stack	*node;
	int		largest;

	node = *head;
	largest = 0;
	while (node)
	{
		if (node->value > largest)
			largest = node->value;
		node = node->next;
	}
	return (largest);
}

/*
** Finds position of largest number in stack
*/

int		find_largest_pos(t_stack **head, int largest)
{
	t_stack	*node;
	int		pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->value == largest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

/*
** Finds smallest number in stack
*/

int		find_smallest(t_stack **head)
{
	t_stack	*node;
	int		smallest;

	node = *head;
	smallest = node->value;
	while (node)
	{
		if (node->value <= smallest)
			smallest = node->value;
		node = node->next;
	}
	return (smallest);
}

/*
** Finds position of smallest number in stack
*/

int		find_smallest_pos(t_stack **head, int smallest)
{
	t_stack	*node;
	int		pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->value == smallest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

/*
** Finds position of the smallest norm value
*/

int		find_nsmallest_pos(t_stack **head, int smallest)
{
	t_stack	*node;
	int		pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->norm == smallest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

/*
** Finds position of the largest norm value
*/

int		find_nlargest_pos(t_stack **head, int largest)
{
	t_stack	*node;
	int		pos;
	int		i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->norm == largest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

/*
** Ideally find the first number from from and rear within the range given
** and return the pos the results in least moves to get to top.
*/

/* int		find_nsmallest_range_pos(t_stack **head, int range)
{
	//TODO
	t_stack	*node;
	t_stack *lnode;
	int 	pos_front;
	int		pos_rear;
	int		i;
	int		l;

	node = *head;
	lnode = *head;
	pos_front = 0;
	pos_rear = 0;
	i = 0;
	l = stack_size(*head);
	while (lnode->next)
		lnode = lnode->next;
	while (node)
	{
		if (node->norm <= range)
		{
			pos_front = i;
			break ;
		}
		node = node->next;
		i++;
	}
	while (lnode)
	{
		if (lnode->norm <= range)
		{
			pos_rear = l - 1;
			break ;
		}
		lnode = lnode->prev;
		l--;
	}
	if (pos_front <= (stack_size(*head) - pos_rear))
		return (pos_front);
	else
		return (pos_rear);
	return (0);
} */
