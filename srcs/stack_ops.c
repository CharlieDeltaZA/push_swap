/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:04:47 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/04 09:48:56 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack		*stack_init(int ac, char **av)
{
	t_stack	*head;
	t_stack	*node;
	size_t	i;

	head = stack_create_node(ft_atoi(av[1]));
	i = 1;
	while (++i < ac)
	{
		node = stack_create_node(ft_atoi(av[i]));
		stack_add_tail(&head, node);
	}
	return (head);
}

/*
** Creates & adds a new node to the beginning of an existing list
*/

void		stack_add_head(t_stack **head, t_stack *node)
{
	//TODO
//	t_stack	*node;
	//t_stack	*tmp;

	//tmp = *head;
	//tmp->prev = node;
//	node = stack_create_node(value);
	node->next = *head;
	node->prev = NULL;
	*head = node;
}

/*
** Create a new node with data supplied and return pointer to it
*/

t_stack		*stack_create_node(int value)
{
	//TODO -- Done?
	t_stack	*node;

	node = (t_stack*)malloc(sizeof(t_stack));
	if (node)
	{
		node->value = value; //EDIT
		node->next = NULL;
//		node->prev = NULL; //Do I want to use DLL? 
	}
	return (node);
}

/*
** Create and add node to end of stack
*/

void		stack_add_tail(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	tmp = *head;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
		//node->prev = tmp;
	}
//	else
//		*head = stack_create_node(value);
}

/*
** Get the size of the stack
*/

size_t		stack_size(t_stack *head)
{
	size_t	i;
	t_stack	*list;

	list = head;
	i = 0;
	while (list->next)
	{
		i++;
		list = list->next;
	}
	return (i);
}
