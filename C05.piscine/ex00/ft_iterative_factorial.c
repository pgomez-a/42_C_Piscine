/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:50:56 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/10 12:01:14 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		fact;

	fact = nb;
	if (nb > 0)
	{
		while (nb >= 0)
		{
			if (nb == 0)
				fact *= 1;
			else if (nb != 1)
				fact *= (nb - 1);
			nb--;
		}
		return (fact);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
