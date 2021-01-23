/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:12:32 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/02 18:19:21 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 1;
	while (str[count1] != '\0')
	{
		if ((str[count1] < 65) || (str[count1] > 90))
			count2 = 0;
		count1++;
	}
	return (count2);
}
