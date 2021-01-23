/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fewarg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 16:57:12 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 17:00:08 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_fewarg(char *map, int lastnbr)
{
	int		fd;
	char	*buffer;
	int		i;

	i = lastnbr;
	fd = open(map, O_RDONLY);
	buffer = (char *)malloc(sizeof(char*) * ft_calculate_file(map));
	read(fd, buffer, ft_calculate_file(map));
	while (buffer[i] != '\n')
		i++;
	ft_close(fd, buffer);
	return (i < lastnbr + 3) ? 0 : 1;
}
