/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:04:09 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/23 13:54:43 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// STUFF AND THINGS

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;
	// size_t		size_a;

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
	// size_a = stack_size(a);
	DEBUG_2;
	///////////////////////// Sort4 + 5 - find the smallest vals, push b, sort3, pa
	sort_master(&a, &b);
	// if (size_a == 2)
	// 	sort_2(&a);
	// if (size_a == 3)
	// 	sort_3(&a);
	// if (size_a > 3 && size_a < 6)
	// 	sort_5(&a, &b);
	DEBUG_2;
	// if ((check_sorted(a)) && !b)
	// 	ft_putendl_col_fd(GREEN, "OK", 1);
	// else
	// 	ft_putendl_col_fd(YELLOW, "KO", 1);
	STACK_FREE;
	return (0);
}
