/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:04:47 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/26 12:23:45 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Initialize a list (stack) using values received during input
*/

t_stack		*stack_init(int size, int ac, char **av)
{
	t_stack	*head;
	t_stack	*node;
	int		i;

	i = 0;
	if (size == 2 && ac == 2) //edge case for a str input with 2 values
	{
		head = stack_create_node(ft_atoi(av[0]));
		while (++i < size)
			ADD_NODES;
	}
	else if (size == ac)	//regular av input
	{
		head = stack_create_node(ft_atoi(av[1]));
		i = 1;
		while (++i < ac)
			ADD_NODES;
	}
	else					//str input from custom arr.
	{
		head = stack_create_node(ft_atoi(av[0]));
		while (++i < size)
			ADD_NODES;
	}
	return (head);
}

/*
** Create a new node with data supplied and return pointer to it
*/

t_stack		*stack_create_node(int value)
{
	t_stack	*node;

	node = (t_stack*)malloc(sizeof(t_stack));
	if (node)
	{
		node->value = value;
		node->norm = -1;
		node->next = NULL;
		node->prev = NULL;
	}
	return (node);
}

/*
** Add node to the beginning of an existing list
*/

void		stack_add_head(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	if (!(head) || (!(node)))
		return ;
	tmp = *head;
	if (tmp)
	{
		tmp->prev = node;
		node->next = *head;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
}

/*
** Add node to the end of an existing list
*/

void		stack_add_tail(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	if (!(head) || (!(node)))
		return ;
	tmp = *head;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
		node->prev = tmp;
	}
}

/*
** Frees the stack pointed to by **head
*/

void		free_stack(t_stack **head)
{
	t_stack	*current;
	t_stack	*next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}