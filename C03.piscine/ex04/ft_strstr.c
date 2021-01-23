/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:35:39 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/08 10:54:37 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		count;
	int		count2;
	int		t;

	count = 0;
	if (to_find[count] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		t = 0;
		if (str[count] == to_find[t])
		{
			count2 = count;
			while (to_find[t] != '\0' && to_find[t] == str[count2])
			{
				t++;
				count2++;
			}
			if (to_find[t] == '\0')
				return (str + count);
		}
		count++;
	}
	return (0);
}
