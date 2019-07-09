/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:04:47 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/09 11:50:46 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Initialize a list (stack) using values received during input
*/

t_stack		*stack_init(int ac, char **av)
{
	//TODO -- Done?
	t_stack	*head;
	t_stack	*node;
	int	i;

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
** Add node to the beginning of an existing list
*/

void		stack_add_head(t_stack **head, t_stack *node)
{
	//TODO -- Done?
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
** Add node to the end of an existing list
*/

void		stack_add_tail(t_stack **head, t_stack *node)
{
	//TODO -- Done?
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
** Frees the stack pointed to by **head
*/

void		free_stack(t_stack **head)
{
	//TODO -- Done?
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

void		print_stack(t_stack **head, char stack_id)
{
	t_stack *node;

	node = *head;
	if (node)
	{
		printf("--- Stack %c ---\n", stack_id);
		while (node)
		{
			ft_putnbr(node->value);
			ft_putendl("");
			node = node->next;
		}
		printf("---------------\n");
	}
}