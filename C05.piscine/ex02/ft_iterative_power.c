/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:01:48 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/10 12:49:25 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		count;
	int		result;

	count = 0;
	result = nb;
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		while (count < (power - 1))
		{
			result *= nb;
			count++;
		}
		return (result);
	}
	else
		return (0);
}
