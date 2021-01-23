/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:46:29 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/02 18:16:06 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 1;
	while (str[count1] != '\0')
	{
		if ((str[count1] < 97) || (str[count1] > 122))
			count2 = 0;
		count1++;
	}
	return (count2);
}
