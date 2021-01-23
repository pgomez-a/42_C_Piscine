/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:34:00 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/10 10:52:30 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		fact;

	if (nb == 0)
		fact = 1;
	else if (nb > 0)
		fact = nb * ft_recursive_factorial(nb - 1);
	else
		fact = 0;
	return (fact);
}
