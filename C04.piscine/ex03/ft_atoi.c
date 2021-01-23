/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:59:41 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/10 15:19:26 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		convert_to_int(char *str, int count)
{
	int		num;

	num = 0;
	while (str[count] >= '0' && str[count] <= '9')
	{
		num = (num * 10) + ((int)str[count] - '0');
		count++;
	}
	return (num);
}

int		ft_atoi(char *str)
{
	unsigned int	num;
	int				ct;
	int				count_diff;

	ct = 0;
	count_diff = 0;
	if (str[ct] != '\0')
	{
		while (str[ct] == 32 || str[ct] == '\t' || str[ct] == '\n' ||
				str[ct] == '\v' || str[ct] == '\f' || str[ct] == '\r')
			ct++;
		while (str[ct] == '+' || str[ct] == '-')
		{
			(str[ct] == '-') ? count_diff++ : 0xDEBAF;
			ct++;
		}
		if (count_diff % 2 != 0)
			count_diff = -1;
		num = convert_to_int(str, ct);
		if (count_diff == -1)
			return ((int)-num);
		else
			return ((int)num);
	}
	return (0);
}
