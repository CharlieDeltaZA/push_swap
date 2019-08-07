/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viz.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 09:24:24 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/07 15:07:45 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <time.h>

static void		print_header(void)
{
	int i;

	ft_putchar_col_fd(WHITE, '+', 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(WHITE, '-', 1);
	ft_putchar_col_fd(WHITE, '+', 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(WHITE, '-', 1);
	ft_putchar_col_fd(WHITE, '+', 1);
	ft_putendl("");
	DIVIDER;
	ft_putstr_col_fd(CYAN, "Stack A     ", 1);
	DIVIDER;
	ft_putstr_col_fd(CYAN, "Stack B     ", 1);
	DIVIDER;
	ft_putendl("");
}

static void		print_top(void)
{
	int		i;

	ft_putchar_col_fd(WHITE, '+', 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(WHITE, '-', 1);
	ft_putchar_col_fd(WHITE, '+', 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(WHITE, '-', 1);
	ft_putchar_col_fd(WHITE, '+', 1);
	ft_putchar('\n');
}

static void		print_content(t_stack *a, t_stack *b)
{
	int		i;

	while (a || b)
	{
		DIVIDER;
		if (a)
			i = 13 - ft_intlen(a->value);
		else
			i = 12;
		(a) ? (ft_putnbr(a->value)) : (ft_putchar('*'));
		while (--i)
			ft_putchar(' ');
		DIVIDER;
		if (b)
			i = 13 - ft_intlen(b->value);
		else
			i = 12;
		(b) ? (ft_putnbr(b->value)) : (ft_putchar('*'));
		while (--i)
			ft_putchar(' ');
		DIVIDER;
		(a) ? (a = a->next) : NULL;
		(b) ? (b = b->next) : NULL;
		ft_putendl("");
	}
}

static void		print_bottom(void)
{
	int		i;

	ft_putchar_col_fd(WHITE, '+', 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(WHITE, '-', 1);
	ft_putchar_col_fd(WHITE, '+', 1);
	i = -1;
	while (++i < 13)
		ft_putchar_col_fd(WHITE, '-', 1);
	ft_putchar_col_fd(WHITE, '+', 1);
	ft_putchar('\n');
}

void			visualize(t_stack *stack_a, t_stack *stack_b)
{
	CLEAR;
	print_header();
	print_top();
	print_content(stack_a, stack_b);
	print_bottom();
	usleep(70000);
}
