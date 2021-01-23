/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:04:13 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/10 14:57:55 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index <= 1)
			return (index);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else
		return (-1);
}
