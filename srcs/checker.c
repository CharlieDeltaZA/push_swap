/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:59:54 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/01 16:16:58 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;
	t_arguments args = {0};
	ft_putnbr(sizeof(args));
	//handle_arguments(&ac, &av, &args);
	//ft_putnbr(ac);
	//ft_putendl("");
	av += 1;
	ac--;
	// if (ac < 2)
	// 	return (0);
	if (ac <= 0)
		return (0);
	if (is_string(av[0]))
		a = split_input(av[0], ac);
	else
	{
		validate(/*ac, */ac, av);
		a = stack_init(/*ac, ac, */av);
	}
	b = NULL;
//	DEBUG_2;
	read_input(&a, &b);
	if (check_sorted(a) && !b)
		ft_putendl_col_fd(GREEN, "OK", 1);
	else
		ft_putendl_col_fd(YELLOW, "KO", 1);
	STACK_FREE;
	return (0);
}
