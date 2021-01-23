/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 11:17:05 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 19:08:33 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "error.h"

int		ft_verif_map(char a, char b, char *buffer)
{
	int		count;

	count = 0;
	while (buffer[count] != 10)
		count++;
	count++;
	while (buffer[count] != '\0')
	{
		if ((buffer[count] != a && buffer[count] != b) && buffer[count] != 10)
			return (0);
		count++;
	}
	return (1);
}

int		read_map(char *map, int lastnbr)
{
	int		fd;
	char	*buffer;
	char	tab[2];
	int		i;
	int		t;

	fd = open(map, O_RDONLY);
	buffer = (char *)malloc(sizeof(char *) * ft_calculate_file(map));
	read(fd, buffer, ft_calculate_file(map));
	i = lastnbr;
	t = 0;
	while (buffer[i] && t < 3)
	{
		if (buffer[i] >= 32 && buffer[i] <= 126)
		{
			tab[t] = buffer[i];
			t++;
		}
		i++;
	}
	close(fd);
	return (ft_verif_map(tab[0], tab[1], buffer)) ? 1 : 0;
}
