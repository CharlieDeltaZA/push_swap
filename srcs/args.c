/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:17:40 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/08 20:54:48 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Checks whether the current av input should be handled as an argument.
*/

static int		is_arg(char *av)
{
	if (*av == '-' && (!(av[1] >= '0' && av[1] <= '9')) && !(av[1] == '-'))
		return (1);
	return (0);
}

/*
** Handles whether any arguments are passed in, and skips over them.
*/

void			handle_arguments(int *ac, char ***av, t_arguments *args)
{
	while (*ac > 0 && is_arg(**av))
	{
		if (*ac == 0)
			return ;
		**av += 1;
		if (***av == 'v')
		{
			SHIFT_ARGS_2;
			args->v = 1;
		}
		else if (***av == 'p')
		{
			SHIFT_ARGS_2;
			args->p = 1;
		}
		else if (***av == 'c')
		{
			SHIFT_ARGS_2;
			args->c = 1;
		}
		else
			error_out(ARGS);
	}
}
