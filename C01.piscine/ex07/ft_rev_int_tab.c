/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 13:27:10 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/01 14:55:38 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		rev_list[size];
	int		count;
	int		end;
	int		*pos;

	end = size - 1;
	count = 0;
	pos = tab;
	while (count < size)
	{
		rev_list[end] = *pos;
		end--;
		count++;
		pos++;
	}
	count = 0;
	while (count < size)
	{
		*tab = rev_list[count];
		count++;
		tab++;
	}
}
