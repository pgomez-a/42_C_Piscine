/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 17:50:45 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/16 19:10:10 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "bsq.h"

int		ft_row_size_char(char *buffer)
{
	int		row_size;
	int		i;
	int		z;
	int		t_size;

	i = 0;
	z = 0;
	t_size = 0;
	row_size = 0;
	while (buffer[t_size] != '\0')
		t_size++;
	while (buffer[i] != 10)
	{
		i++;
		z++;
	}
	z++;
	i++;
	while (buffer[i] != 10)
	{
		row_size++;
		i++;
	}
	t_size /= row_size;
	return (t_size);
}

int		ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else if (c <= a && c <= b)
		return (c);
	else
		return (0);
}

int		ft_calculate_position(int xpos, int num, int result, int pos)
{
	int		count;

	count = 0;
	while (count < result)
	{
		if ((xpos >= (pos - (result - 1) * num - (result - 1)) + (num * count))
				&& (xpos <= (pos - (result - 1) * num) + (num * count)))
			return (1);
		count++;
	}
	return (0);
}

void	ft_find_size(char *buffer, int *array, int result, int pos)
{
	int		i;
	int		cols;
	int		rows;
	char	word;

	cols = ft_row_len_char(buffer);
	rows = ft_row_size_char(buffer);
	i = 0;
	while (i < (cols * (rows - 1)))
	{
		if (ft_calculate_position(i, cols, result, pos))
			word = ft_write(buffer);
		else if (array[i] > 0)
			word = ft_find_empty(buffer);
		else
			word = ft_find_obs(buffer);
		write(1, &word, 1);
		if (i % cols == (cols - 1))
			write(1, "\n", 1);
		i++;
	}
	free(array);
}

void	ft_assign_values(char *buffer, int *array, int rows, int cols)
{
	int		i;
	int		pos;
	int		result;

	result = 0;
	i = 0;
	while (i < (rows * cols))
	{
		if (i < cols || i % cols == 0)
		{
			array[i] *= 1;
		}
		else if (array[i] > 0)
		{
			array[i] +=
				ft_min(array[i - 1], array[i - cols], array[i - (cols + 1)]);
		}
		if (array[i] > result)
		{
			pos = i;
			result = array[i];
		}
		i++;
	}
	ft_find_size(buffer, array, result, pos);
}
