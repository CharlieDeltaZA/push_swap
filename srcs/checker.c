/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:59:54 by cdiogo            #+#    #+#             */
/*   Updated: 2020/05/17 12:32:32 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;
	t_arguments args;

	// SHIFT_ARGS;
	av += 1;
	ac--;
	handle_arguments(&ac, &av, &args);
	if (ac <= 0)
		return (0);
	if (is_string(av[0]) && ac > 2)
		error_out(INPUT);
	else if (is_string(av[0]) && ac == 1)
		a = split_input(av[0]);
	else
		// VAL_INIT;
		validate(ac, av, 0);
		a = stack_init(av);
	b = NULL;
	(args.v) ? (visualize(a, b)) : NULL;
	read_input(&a, &b, args);
	if (check_sorted(a) && !b)
		ft_putendl_col_fd(GREEN, "OK", 1);
	else
		ft_putendl_col_fd(YELLOW, "KO", 1);
	// STACK_FREE;
	free_stack(&a);
	free_stack(&b);
	return (0);
}
