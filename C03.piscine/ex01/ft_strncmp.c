/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:52:04 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/09 08:22:16 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	unsigned int	output;

	count = 0;
	output = 0;
	if (s1[0] == s2[0] && count < n)
	{
		while ((unsigned char)s1[count] == (unsigned char)s2[count] &&
				(unsigned char)(s1[count] != '\0' &&
					(unsigned char)s2[count] != '\0') && count < n)
		{
			count++;
			if ((unsigned char)s1[count] != (unsigned char)s2[count] &&
					count < n)
				output = (unsigned char)s1[count] - (unsigned char)s2[count];
		}
	}
	else if (n == 0)
		output = 0;
	else
		output = (unsigned char)s1[count] - (unsigned char)s2[count];
	return (output);
}
