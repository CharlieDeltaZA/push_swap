/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:17:40 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/01 17:16:33 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void		print_args(t_arguments args)
{
	ft_putendl_col_fd(CYAN, "OPTIONS:", 1);
	(args.c) ? ft_putnbr(1) : ft_putnbr(0);
	ft_putendl("");
	(args.v) ? ft_putnbr(1) : ft_putnbr(0);
	ft_putendl("");
}

static int		is_arg(char *av)
{
	if (*av == '-')
		return (1);
	return (0);
}

void			handle_arguments(int *ac, char ***av, t_arguments *args)
{
	while (is_arg(**av))
	{
		**av += 1;
		if (***av == 'v')
		{
			(args->v) ? (error_out(1)) : NULL;
			*av += 1;
			*ac -= 1;
			args->v = 1;
		}
		else if (***av == 'c')
		{
			(args->c) ? (error_out(1)) : NULL;
			*av += 1;
			*ac -= 1;
			args->c = 1;
		}
		else
		{
			ft_putendl_col_fd(RED, "Invalid Arg", 2);
			exit(1);
		}
	}
	print_args(*args);
}