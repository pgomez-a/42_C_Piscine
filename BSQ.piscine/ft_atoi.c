/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:34:24 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 12:52:01 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include "calculate.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int		fd;
	char	*buffer;
	int		nbr;
	int		minus;
	int		i;

	i = 0;
	fd = open(str, O_RDONLY | O_CREAT);
	buffer = (char *)malloc(sizeof(char*) * sizeof(str));
	read(fd, buffer, 234234);
	nbr = 0;
	minus = 0;
	if (!*buffer)
		return (0);
	while (buffer[i] >= '0' && buffer[i] <= '9')
	{
		nbr = nbr * 10 + (buffer[i] - '0');
		i++;
	}
	close(fd);
	free(buffer);
	return (nbr);
}
