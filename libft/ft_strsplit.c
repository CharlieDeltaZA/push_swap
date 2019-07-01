/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:19:37 by cdiogo            #+#    #+#             */
/*   Updated: 2019/06/05 16:55:49 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Helper function for ft_strsplit.
** Recursively counts the number of words in the string `str`, words found
** between delimiters `delim`.
** Returns word count `count`.
*/

static int	count_words(char const *str, char delim, int index)
{
	int		count;

	if (!(str[index]))
		return (0);
	count = 0;
	while (str[index] == delim)
		index++;
	while (str[index] != '\0' && str[index] != delim)
	{
		index++;
		count = 1;
	}
	return (count + count_words(str, delim, index));
}

/*
** Helper function for ft_strsplit.
** Determines the length of each word found in string `str`.
** Returns word length `len`.
*/

static int	str_len(char const *str, char delim, int index)
{
	int		len;

	len = 0;
	while (str[index] == delim)
		index++;
	while (str[index] != delim && str[index] != '\0')
	{
		index++;
		len++;
	}
	return (len);
}

/*
** Allocates a fresh array of strings (all ending with '\0', including the
** array) obtained by splitting `s` using character `c` as a delimiter.
** Returns the array of strings, or NULL if allocation fails.
*/

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;
	int		k;

	if (!s || !c)
		return (NULL);
	if (!(array = (char**)malloc(sizeof(*array) * (count_words(s, c, 0) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_words(s, c, 0))
	{
		k = 0;
		if (!(array[i] = ft_strnew(str_len(s, c, j))))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			array[i][k++] = s[j++];
		array[i][k] = '\0';
		i++;
	}
	array[i] = 0;
	return (array);
}
