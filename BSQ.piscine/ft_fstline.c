/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:17:05 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 19:40:27 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "error.h"
#include "basics.h"

int		ft_repeated(int i, char c, char *buffer)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (buffer[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int		ft_fstline(char *map, int lastnbr, int rows)
{
	int		fd;
	char	*buffer;
	int		i;

	i = lastnbr;
	fd = open(map, O_RDONLY);
	buffer = (char *)malloc(sizeof(char*) * ft_calculate_file(map));
	read(fd, buffer, ft_calculate_file(map));
	while (buffer[i] != '\n')
	{
		if (i >= lastnbr + 3 || ft_repeated(i, buffer[i], buffer) ||
			ft_str_is_printable(&buffer[i])
			|| !ft_row_len(buffer)
			|| !nl_end_file(buffer, rows))
		{
			ft_close(fd, buffer);
			return (0);
		}
		i++;
	}
	ft_close(fd, buffer);
	return (1);
}

int		ft_validate(char *map, int lastnbr, int rows)
{
	int i;

	i = 0;
	if (!ft_fewarg(map, lastnbr))
		return (0);
	if (!read_map(map, lastnbr))
		return (0);
	if (!ft_fstline(map, lastnbr, rows))
		return (0);
	return (1);
}
