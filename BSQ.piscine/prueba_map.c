/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 20:27:49 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/16 19:11:02 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "bsq.h"

void	ft_convert_int(char *buffer, int rows, int cols)
{
	int		i;
	int		z;
	int		*array;
	char	obs;

	obs = ft_find_obs(buffer);
	array = (int *)malloc(sizeof(int *) * cols * rows);
	i = 0;
	z = 0;
	while (buffer[i] != 10)
		i++;
	i++;
	while (buffer[i] != '\0')
	{
		while (buffer[i] != 10)
		{
			array[z] = (buffer[i] == obs) ? 0 : 1;
			z++;
			i++;
		}
		i++;
	}
	ft_assign_values(buffer, array, rows, cols);
}

void	ft_create_map(char *map)
{
	int		fd;
	int		t_size;
	int		n_rows;
	int		n_cols;
	char	*buffer;

	n_rows = ft_atoi(map);
	t_size = ft_calculate_file(map);
	fd = open(map, O_RDONLY);
	buffer = (char *)malloc(sizeof(char *) * sizeof(map));
	read(fd, buffer, t_size);
	n_cols = ft_row_len_char(buffer);
	ft_convert_int(buffer, n_rows, n_cols);
	close(fd);
	free(buffer);
}
