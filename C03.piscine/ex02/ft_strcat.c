/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 08:53:14 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/07 13:46:53 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		count1;
	int		count2;

	count1 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	count2 = 0;
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1++] = '\0';
	return (dest);
}
