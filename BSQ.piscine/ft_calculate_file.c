/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_file.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:47:36 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 12:52:59 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculate.h"
#include "bsq.h"

int		ft_calculate_file(char *map)
{
	int		fd;
	char	*buffer;
	int		i;

	i = 0;
	fd = open(map, O_RDONLY | O_CREAT);
	while (read(fd, &buffer, 1))
		i++;
	return (i);
}
