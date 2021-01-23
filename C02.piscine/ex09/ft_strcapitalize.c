/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:09:58 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/05 08:14:53 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		count;

	count = 1;
	((str[0] >= 'a') && (str[0] <= 'z')) ? str[0] -= 32 : 0xDEBAF;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'a') && (str[count] <= 'z'))
		{
			if (!(((str[count - 1] >= '0') && (str[count - 1] <= '9')) ||
					((str[count - 1] >= 'A') && (str[count - 1] <= 'Z')) ||
						((str[count - 1] >= 'a') && (str[count - 1] <= 'z'))))
				str[count] -= 32;
		}
		else if ((str[count] >= 'A') && (str[count] <= 'Z'))
		{
			if (((str[count - 1] >= '0') && (str[count - 1] <= '9')) ||
					((str[count - 1] >= 'a') && (str[count - 1] <= 'z')) ||
						((str[count - 1] >= 'A') && (str[count - 1] <= 'Z')))
				str[count] += 32;
		}
		count++;
	}
	return (str);
}
