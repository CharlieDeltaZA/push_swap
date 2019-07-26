/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:46:13 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/26 10:34:33 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Determines whether there are any duplicate numbers in the array input,
** and outputs an appropriate error and exits if there are.
*/

void	err_duplicate_arr(int size, char **arr)
{
	int		i;
	int		k;
	int		*args;

	i = 0;
	args = (int*)malloc(size * sizeof(int));
	while (i < size)
	{
		args[i] = ft_atoi(arr[i]);
		i++;
	}
	i = 0;
	while (i < size)
	{
		k = i + 1;
		while (k < size)
		{
			if (args[i] == args[k])
				FREE_ERR_DUPE;
			k++;
		}
		i++;
	}
	free(args);
}

/*
** Splits the single string input, validates it, initializes it and returns
** a pointer to the stack. Also frees the malloc'd array and malloc'd array
** elements.
*/

t_stack	*split_input(char *str, int ac)
{
	char	**arr;
	t_stack	*a;

	printf("START OF SPLIT INPUT\n");
	arr = ft_strsplit(str, ' ');
	validate(arr_size(arr), ac, arr);
	a = stack_init(arr_size(arr), ac, arr);
	array_free(arr);
	printf("END OF SPLIT INPUT\n");
	return (a);
}

/*
** Frees the elements of an array before freeing the pointer to the array
*/

void	array_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
