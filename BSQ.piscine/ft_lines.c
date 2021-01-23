/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:17:05 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 19:07:28 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_row_len(char *buffer)
{
	int		row_len;
	int		i;
	int		z;
	int		t_size;

	i = 0;
	z = 0;
	t_size = 0;
	row_len = 0;
	while (buffer[i] != 10)
		i++;
	z = ++i;
	while (buffer[z] != 10)
	{
		z++;
		t_size++;
		row_len++;
	}
	z++;
	while (buffer[z])
	{
		(buffer[z] != '\n') ? t_size++ : 0xDEBAF;
		z++;
	}
	return (t_size % row_len == 0) ? 1 : 0;
}

int		nl_end_file(char *buffer, int rows)
{
	int		nl;
	int		count;

	nl = 0;
	count = 0;
	while (buffer[count])
	{
		if (buffer[count] == 10)
			nl++;
		count++;
	}
	buffer[count] = '\0';
	nl--;
	return (rows == nl) ? 1 : 0;
}
