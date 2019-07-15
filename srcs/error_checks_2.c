/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:46:13 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/15 16:15:32 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Determines whether there are any duplicate numbers in the array input,
** and outputs an appropriate error and exits if there are.
*/

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

t_stack	*split_input(char *str, int ac)
{
	char	**arr;

	arr = ft_strsplit(str, ' ');
	validate(arr_size(arr), ac, arr);
	return (stack_init(arr_size(arr), ac, arr));
}
