/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:03:40 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/08 12:19:22 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_esp_num(int nb)
{
	int		count;
	int		output;
	int		tab[7];

	count = 0;
	nb += 1;
	nb *= -1;
	while (nb > 0 && count < 10)
	{
		(count == 0) ? tab[count] = (nb % 10) + 1 : 0xDEBAF;
		(count != 0) ? tab[count] = nb % 10 : 0xDEBAF;
		nb /= 10;
		count++;
	}
	count--;
	write(1, "-", 1);
	while (count >= 0)
	{
		output = '0' + tab[count];
		write(1, &output, 1);
		count--;
	}
}

void	ft_putnbr(int nb)
{
	int		count;
	int		output;
	int		tab[7];

	count = 0;
	(nb == -2147483648) ? write_esp_num(nb) : 0xDEBAF;
	(nb == 0) ? write(1, "0", 1) : 0xDEBAF;
	if (nb != 0 && nb > -2147483648)
	{
		(nb < 0) ? write(1, "-", 1) : 0xDeBAF;
		(nb < 0) ? nb *= -1 : 0xDEBAF;
		while (nb > 0 && count < 10)
		{
			tab[count] = nb % 10;
			nb /= 10;
			count++;
		}
		count--;
		while (count >= 0)
		{
			output = '0' + tab[count];
			write(1, &output, 1);
			count--;
		}
	}
}
