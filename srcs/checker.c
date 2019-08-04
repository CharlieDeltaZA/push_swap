/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 14:59:54 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/04 14:30:24 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Current issue - Checker segfaults if passed args and no numbers

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;
	t_arguments args;

	SHIFT_ARGS;
	printf("AC before arg handle: %d\n", ac);
	handle_arguments(&ac, &av, &args);
	printf("AC after arg handle: %d\n", ac);
	if (ac <= 0)
		return (0);
	if (is_string(av[0]))
		a = split_input(av[0]);
	else
	{
		validate(ac, av);
		a = stack_init(av);
	}
	b = NULL;
	(args.v) ? (visualize(a, b)) : NULL;
	read_input(&a, &b, args);
	if (check_sorted(a) && !b)
		ft_putendl_col_fd(GREEN, "OK", 1);
	else
		ft_putendl_col_fd(YELLOW, "KO", 1);
	STACK_FREE;
	return (0);
}
