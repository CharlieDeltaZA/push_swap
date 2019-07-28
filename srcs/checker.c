/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:59:54 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/28 15:06:04 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;

	if (ac < 2)
		return (0);
	if (ac == 2)
		a = split_input(av[1], ac);
	else
	{
		validate(ac, ac, av);
		a = stack_init(ac, ac, av);
	}
	b = NULL;
//	DEBUG_2;
	read_input(&a, &b);
	if ((check_sorted(a)) && !b)
		ft_putendl_col_fd(GREEN, "OK", 1);
	else
		ft_putendl_col_fd(YELLOW, "KO", 1);
	STACK_FREE;
	return (0);
}

/*
**int		main(int ac, char **av)
**{
**	t_stack *a;
**	t_stack *b;
**	t_stack	*tmp;
**	t_stack	*tmp2;
**	t_stack	*hep;
**	int	i = 1;
**	char	*line;
**
**	if (ac < 2)
**		return (0);  //Too few args, program does nothing
**
**	validate(ac, av);
**	a = stack_init(ac, av);
**	printf("------Before Edit--------\n");
**	//print for debug
**	tmp = a;
**	tmp2 = a;
**	b = stack_create_node(15);
**
**	// if (check_sorted(&a))
**	// 	ft_putendl_col_fd(GREEN, "OK", 1);
**	// else
**	// 	ft_putendl_col_fd(YELLOW, "KO", 1);
**
**	// while (get_next_line(0, &line))
**	// {
**	// 	if (err_ops(line))
**	// 		do_op(a, b, line);
**	// 	else
**	// 	{
**	// 		free(line);
**	// 	//	stack free
**	// 	}
**	// }
**	hep = a;
**	printf("%zu\n", stack_size(&hep));
**	while (tmp)
**	{
**		printf("Node %d\nValue: %d\n", i, tmp->value);
**		i++;
**		tmp = tmp->next;
**	}
**	// if (check_sorted(a) == 1)
**	// 	ft_putendl_col_fd(GREEN, "OK", 1);
**	// else
**	// 	ft_putendl_col_fd(YELLOW, "KO", 1);
**	error_out(1);
**	//err_ops("pa");
**	printf("------After Edit--------\n");
**	i = 1;
**	//a = tmp;
**	sa(&tmp2);
**	while (tmp2)
**	{
**		printf("Node %d\nValue: %d\n", i, tmp2->value);
**		i++;
**		tmp2 = tmp2->next;
**	}
**	pa(&a, &b);
**	//pb(&a, &b);
**	i = 1;
**	printf("-----B-----\n");
**	while (a)
**	{
**		printf("Node %d\nValue: %d\n", i, a->value);
**		i++;
**		a = a->next;
**	}
**	error_out(1);
**	printf("Henlo");
**	return (0);
**}
*/
