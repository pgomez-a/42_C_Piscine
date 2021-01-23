/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:15:31 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/11/30 09:27:32 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_numbers(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(c == '9' && b == '8' && a == '7'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char unit;
	char ten;
	char hundred;

	unit = '2';
	ten = '1';
	hundred = '0';
	while (unit <= '9' && ten <= '8' && hundred <= '7')
	{
		write_numbers(hundred, ten, unit);
		unit++;
		if (unit == ':')
		{
			ten++;
			unit = ten + 1;
		}
		if (ten == '9')
		{
			hundred++;
			ten = hundred + 1;
			unit = ten + 1;
		}
	}
}
