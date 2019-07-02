/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:04:47 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/02 14:38:42 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		stack_init(t_stack *a, int ac, char **av)
{
//	t_stack	*tmp;

//	add nodes to stack starting from the rear of the args
//	Add them to head, starting from the back, basically.
}

/*
** Adds a new node to the beginning of an existing list. `*new` is the node to
** add, `**head` is a pointer to the head of the list.
*/

void		stack_add(t_stack **head, t_stack *new)
{
	//TODO
	new->next = *head;
	*head = new;
}

/*
** Create a new node with data supplied and return pointer to it
*/

t_stack		*stack_create_node(int value)
{
	//TODO
	t_stack	*node;

	node = (t_stack*)malloc(sizeof(t_stack));
	if (node)
	{
		node->value = 123456789; //EDIT
		node->next = NULL;
	}
	return (node);
}

/*
** Create and add node to end of stack
*/

void		stack_push_tail(t_stack **head, int value)
{
	t_stack	*node;

	node = *head;
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = stack_create_node();
	}
	else
		*head = stack_create_node();
}
