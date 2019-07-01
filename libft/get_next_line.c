/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:27:38 by cdiogo            #+#    #+#             */
/*   Updated: 2019/07/01 10:56:29 by cdiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Finds the position of the newline char in the string that is passed to it
*/

static size_t	find_n(char **str, const int fd)
{
	size_t	i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	return (i);
}

/*
** Takes the static var `str` and appends the string to `line` without the '\n'
** char. Adds the overflow text to `extra` to temp hold the text before
** reassigning it to static var `str` for use in the next loop.
*/

static int		newline(const int fd, char **line, int ret, char **str)
{
	char	*extra;
	size_t	i;

	i = find_n(str, fd);
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		extra = ft_strdup(str[fd] + 1 + i);
		free(str[fd]);
		str[fd] = extra;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

/*
** Function to determine what number (-1, 0, 1) to pass back to the main
** -1 for an error, 0 for completion of reading in GNL, 1 for a successful
** read of a line. Calls newline func to perform its job of reading to line
** We are only assumed to be finished reading when the return value is 0 AND
** the substring is at position '\0'
*/

static int		result(int ret, char **str, const int fd, char **line)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (str[fd] == NULL || str[fd] == '\0'))
		return (0);
	return (newline(fd, line, ret, str));
}

/*
** ! Assumed `**line` will be initialized and freed by the main !
** Multiple FDs supported. BUFF_SIZE chars are read from the FD, and assigned
** to a temp variable, by joining `str` and `buffer`, before reassigning to
** static var for safe-keeping. If a newline char is found in `buffer` during
** the loop, we break out of the loop and call the newline function for
** handling of assigning the "line" to `**line` for use in the main.
*/

int				get_next_line(const int fd, char **line)
{
	int			ret;
	char		buffer[BUFF_SIZE + 1];
	static char *str[99];
	char		*tmp;

	if (fd < 0 || line == NULL || read(fd, buffer, 0))
		return (-1);
	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		if (str[fd] == NULL)
			str[fd] = ft_strdup("");
		buffer[ret] = '\0';
		tmp = ft_strjoin(str[fd], buffer);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (result(ret, str, fd, line));
}
