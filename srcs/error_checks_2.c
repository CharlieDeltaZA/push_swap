/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:46:13 by cdiogo            #+#    #+#             */
/*   Updated: 2019/08/08 13:09:28 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
** Splits the single string input, validates it, initializes it and returns
** a pointer to the stack. Also frees the malloc'd array and malloc'd array
** elements.
*/

t_stack	*split_input(char *str)
{
	char	**arr;
	t_stack	*a;

	arr = ft_strsplit(str, ' ');
	validate(arr_size(arr), arr, 1);
	a = stack_init(arr);
	array_free(arr);
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
