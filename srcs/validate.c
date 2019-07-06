/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:48:50 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/06 15:08:38 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	validate(int ac, char **av)
{
	//TODO -- Done?
	int	i;

	i = 1;
	while (i < ac)
	{
		err_input(av[i]);
		err_int(av[i]);
		i++;
	}
	err_duplicate(ac, av);
}