/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:42:32 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/03 12:14:53 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		count1;
	int		count2;

	count1 = 0;
	count2 = 1;
	while (str[count1] != '\0')
	{
		if ((str[count1] < 65) || (str[count1] > 122))
			count2 = 0;
		else if ((str[count1] > 90) && (str[count1] < 97))
			count2 = 0;
		count1++;
	}
	return (count2);
}
