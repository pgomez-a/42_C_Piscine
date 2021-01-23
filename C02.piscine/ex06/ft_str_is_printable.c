/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:17:03 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/02 18:30:45 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 1;
	while (str[count1] != '\0')
	{
		if ((str[count1] < 32) || (str[count1] > 126))
			count2 = 0;
		count1++;
	}
	return (count2);
}
