/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:00:10 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 19:49:19 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_last_number(char *str)
{
	int		fd;
	char	*buffer;
	int		i;

	i = 0;
	fd = open(str, O_RDONLY | O_CREAT);
	buffer = (char *)malloc(sizeof(char*) * sizeof(str));
	read(fd, buffer, 212312);
	if (!*buffer)
		return (0);
	while (buffer[i] >= '0' && buffer[i] <= '9')
		i++;
	close(fd);
	free(buffer);
	return (i);
}

int		main(int argc, char *argv[])
{
	int i;
	int rows;
	int lastnbr;

	i = 1;
	while (i < argc)
	{
		if ((rows = ft_atoi(argv[i])) < 1)
		{
			ft_error();
			return (0);
		}
		if (rows == 1)
		{
			write(1, "Cannot read\n", 12);
			return (0);
		}
		lastnbr = ft_last_number(argv[i]);
		if (ft_validate(argv[i], lastnbr, rows))
			ft_create_map(argv[i]);
		else
			ft_error();
		i++;
	}
	return (0);
}
