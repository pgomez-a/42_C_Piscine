/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:25:52 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/08 09:02:36 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int				count;
	int				output;

	count = 0;
	output = 0;
	if (s1[0] == s2[0])
	{
		while ((unsigned char)s1[count] == (unsigned char)s2[count] &&
				(unsigned char)(s1[count] != '\0' &&
					(unsigned char)s2[count] != '\0'))
		{
			count++;
			if ((unsigned char)s1[count] != (unsigned char)s2[count])
				output = (unsigned char)s1[count] - (unsigned char)s2[count];
		}
	}
	else
		output = (unsigned char)s1[count] - (unsigned char)s2[count];
	return (output);
}
