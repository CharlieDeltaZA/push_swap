/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:52:00 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/01 16:52:48 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	int				temp;

	i = 0;
	while (i < (size - 1))
	{
		k = i;
		while (k < size)
		{
			if (tab[i] > tab[k])
			{
				temp = tab[i];
				tab[i] = tab[k];
				tab[k] = temp;
			}
			k += 1;
		}
		i += 1;
	}
}
