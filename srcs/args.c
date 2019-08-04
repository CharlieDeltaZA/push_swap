/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:17:40 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/04 14:07:17 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int		is_arg(char *av)
{
	if (*av == '-')
		return (1);
	return (0);
}

void			handle_arguments(int *ac, char ***av, t_arguments *args)
{
	if (*ac >= 1)
		while (is_arg(**av))
		{
			**av += 1;
			if (***av >= '0' && ***av <= '9')
				return ;
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
