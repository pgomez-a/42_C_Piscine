/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:10:41 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/02 18:20:00 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 1;
	while (str[count1] != '\0')
	{
		if ((str[count1] < 49) || (str[count1] > 57))
			count2 = 0;
		count1++;
	}
	return (count2);
}
