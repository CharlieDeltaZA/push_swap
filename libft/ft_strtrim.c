/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:17:27 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 16:46:50 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Helper function for ft_strtrim.
** Determines if current character is white space, and iterates over it.
*/

static int	is_white_space(char const *s)
{
	int		j;

	j = 0;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j++;
	return (j);
}

/*
** Allocates a copy of string `s` without whitespace at the beginning or end.
** Whitespace = {space, new-line, tab}.
** Returns `str` after removal of whitespace, or NULL if allocation fails.
*/

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		n;
	int		slen;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) == 0)
		return ((char*)s);
	i = is_white_space(s);
	n = 0;
	slen = ft_strlen(s) - 1;
	if (s[i] == '\0')
		return (ft_strdup(""));
	while (s[slen] == '\t' || s[slen] == '\n' || s[slen] == ' ')
		slen--;
	if (slen < 0)
		slen = 0;
	if (!(str = (char *)malloc(sizeof(char) * (slen - i) + 2)))
		return (NULL);
	while (i <= slen)
		str[n++] = s[i++];
	str[n] = '\0';
	return (str);
}
