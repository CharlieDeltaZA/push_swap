/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_helper_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:36:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/07 16:32:32 by cdiogo           ###   ########.fr       */
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
