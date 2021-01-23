/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:30:41 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/11/30 19:57:03 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	loop_numbers(char a, char b, char c, char d)
{
	while (a <= '9' && b <= '9' && c <= '9' && d <= ':')
	{
		if (b == '9' && c == '9' && d == ':')
		{
			c = ++a;
			b = '0';
			d = b + 1;
		}
		else if (c == '9' && d == ':')
		{
			b++;
			d = b + 1;
			(b == '9') ? (c = a + 1) : 0xDEBAF;
			(b != '9') ? (c = a) : 0xDEBAF;
			(b == '9') ? (d = '0') : 0xDEBAF;
			(b != '9') ? (d = b + 1) : 0xDEBAF;
		}
		else if (d == ':')
		{
			c++;
			d = '0';
		}
		print_numbers(a, b, c, d);
		(d == '9' && c == '9' && b == '8' && a == '9') ? a = ':' : d++;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	loop_numbers(a, b, c, d);
}
