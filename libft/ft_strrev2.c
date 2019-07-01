/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:27:40 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/14 12:18:24 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev2(const char *str)
{
	char	*start;
	char	*end;
	char	c;

	start = (char*)str;
	end = start;
	while (*end != '\0')
		end++;
	while (end > start)
	{
		c = *start;
		*start = *end;
		*end = c;
		start++;
		end--;
	}
	return (start);
}

int		main(void)
{
	const char *str = "Reverse Me";

	printf("Original Str : %s\n", str);
	printf("Reversed Str : %s", ft_strrev2(str));
	return (0);
}
