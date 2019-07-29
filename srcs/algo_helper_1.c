/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_helper_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:36:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/29 15:37:53 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Finds largest number in stack
*/

int		find_largest(t_stack **head)
{
	//TODO
	t_stack	*node;
	int		largest;

	node = *head;
	largest = 0; //change me?
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
	//TODO
	t_stack	*node;
	int 	pos;
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
	//TODO --Erm. 0 might break it
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
	//TODO
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
	//TODO
	t_stack	*node;
	int 	pos;
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
	//TODO
	t_stack	*node;
	int 	pos;
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

// int		find_nsmallest_range_pos(t_stack **head, int range)
// {
// 	//TODO
// 	t_stack	*node;
// 	t_stack *lnode;
// 	int 	pos;
// 	int		i;
// 	int		l;

// 	node = *head;
// 	lnode = *head;
// 	pos = 0;
// 	i = 0;
// 	l = stack_size(*head);
// 	while (lnode->next)
// 		lnode = lnode->next;
// 	while (node && lnode)
// 	{
// 		if (node->norm <= range)
// 		{
// 			pos = i;
// 			//break ;
// 		}
// 		if (lnode->norm <= range && (stack_size(*head) - l) < i)
// 		{
// 			pos = i;
// 			break ;
// 		}		
// 		node = node->next;
// 		lnode = lnode->prev;
// 		i++;
// 		l--;
// 	}
// 	return (pos);
// }
