/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:59:54 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/06 15:02:28 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//TESTS
#include <stdio.h>

// STUFF AND THINGS
/*int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;
//	t_stack		*tmp;
	int			i;
	int			j;
	char		*line;

	if (ac < 3)
//	{
//		ft_putstr_col_fd(RED, "Too few args!\n", 1);
		return (0);
//	}
	//things
	
	return (0);
}*/

int		main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	t_stack	*tmp;
	t_stack	*tmp2;
	int	i = 1;

	if (ac < 3)
		return (0);  //Too few args, program does nothing

	validate(ac, av);
	a = stack_init(ac, av);
	printf("------Before Edit--------\n");
	//print for debug
	tmp = a;
	tmp2 = a;
	b = stack_create_node(15);

	while (a)
	{
		printf("Node %d\nValue: %d\n", i, a->value);
		i++;
		a = a->next;
	}
//	error_out(1);
	//err_ops("pa");
	printf("------After Edit--------\n");
	i = 1;
	//a = tmp;
	sa(tmp);
	pb(a, b);
	pb(a, b);
	while (b)
	{
		printf("Node %d\nValue: %d\n", i, b->value);
		i++;
		b = b->next;
	}
//	error_out(1);
//	printf("Henlo");
	return (0);
}
