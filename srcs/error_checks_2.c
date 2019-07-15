/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:46:13 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/15 10:49:11 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	err_duplicate_arr(int size, char **av)
{
	//TODO -- Done?
	int		i;
	int		k;
	int		*args;

	i = 0;
	args = (int*)malloc(size * sizeof(int));
	while (i < size)
	{
		args[i] = ft_atoi(av[i]);
		i++;
	}
	i = 0;
	while (i < size)
	{
		k = i + 1;
		while (k < size)
		{
			if (args[i] == args[k])
				error_out(DUPE);
			k++;
		}
		i++;
	}
	free(args);
}