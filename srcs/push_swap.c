/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:04:09 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/29 11:22:42 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// STUFF AND THINGS

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
	if (check_sorted(a) && !b)
		return (0);
//	DEBUG_2;
	normalize(&a);
//	DEBUG_2;
	sort_master(&a, &b);
//	DEBUG_2;
	STACK_FREE;
	return (0);
}
