/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:04:47 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/06 16:07:47 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Initialize a list (stack) using values received during input
*/

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
** Add node to the beginning of an existing list
*/

void		stack_add_head(t_stack **head, t_stack *node)
{
	//TODO
//	t_stack	*node;
	t_stack	*tmp;

	tmp = *head;
	tmp->prev = node;
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
		node->prev = NULL; //Do I want to use DLL? 
	}
	return (node);
}

/*
** Add node to the end of an existing list
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
		node->prev = tmp;
	}
}

/*
** Get the size of the list (stack)
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
