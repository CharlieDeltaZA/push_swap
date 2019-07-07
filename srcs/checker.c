/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:59:54 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/07 11:24:18 by cdiogo           ###   ########.fr       */
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
//	int			i;
	char		*line;

	if (ac < 3)
//	{
//		ft_putendl_col_fd(RED, "Too few args!", 1);
		return (0);
//	}
	//things
	validate(ac, av);
	a = stack_init(ac, av);
	b = NULL;
	// GNL to read commands
	while (get_next_line(0, &line))
	{
		if (err_ops(line))
			do_op(a, b, line);
		else
		{
			free(line);
		//	stack free
		}
	}

	if (check_sorted(&a, &b))
		ft_putendl_col_fd(GREEN, "OK", 1);
	else
		ft_putendl_col_fd(YELLOW, "KO", 1);
	return (0);
}*/

int		main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	t_stack	*tmp;
	t_stack	*tmp2;
	int	i = 1;
	char	*line;

	if (ac < 3)
		return (0);  //Too few args, program does nothing

	validate(ac, av);
	a = stack_init(ac, av);
	printf("------Before Edit--------\n");
	//print for debug
	tmp = a;
	tmp2 = a;
	b = stack_create_node(15);

	if (check_sorted(&a))
		ft_putendl_col_fd(GREEN, "OK", 1);
	else
		ft_putendl_col_fd(YELLOW, "KO", 1);

	while (get_next_line(0, &line))
	{
		if (err_ops(line))
			do_op(a, b, line);
		else
		{
			free(line);
		//	stack free
		}
	}
	while (a)
	{
		printf("Node %d\nValue: %d\n", i, a->value);
		i++;
		a = a->next;
	}
	// if (check_sorted(a) == 1)
	// 	ft_putendl_col_fd(GREEN, "OK", 1);
	// else
	// 	ft_putendl_col_fd(YELLOW, "KO", 1);
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
