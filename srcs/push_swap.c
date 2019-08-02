/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 15:04:09 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/02 13:01:26 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;

	SHIFT_ARGS;
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
	if (check_sorted(a) && !b)
		return (0);
	normalize(&a);
	sort_master(&a, &b);
	STACK_FREE;
	return (0);
}
