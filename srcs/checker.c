/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:59:54 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/04 10:13:52 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//TESTS
#include <stdio.h>

// STUFF AND THINGS
/*int		main(int ac, char **av)
{
	t_stack		*head;
	t_stack		*stack;
	t_stack		*tmp;
	int			i;
	int			j;

	head = NULL;
	i = 2;
	j = 1;
	if (ac < 2)
//	{
//		ft_putstr_col_fd(RED, "Too few args!\n", 1);
		return (0);
//	}
	else
		//Yes
	{
	//	head = stack_create_node();
		while (i <= ac)
		{
			stack_push_tail(head, ft_atoi(av[i]));
			i++;
		}
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
		printf("Node %d has value %d", j, tmp->value);
		j++;
	}

	return (0);
}*/

int		main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	int	i = 1;

	if (ac < 3)
		return (0);  //Too few args, program does nothing

	a = stack_init(ac, av);

	//print for debug
	while (a)
	{
		printf("Node %d\nValue: %d\n", i, a->value);
		i++;
		a = a->next;
	}
	return (0);
}