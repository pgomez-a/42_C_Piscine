/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 09:21:56 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/07 13:53:52 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count1;
	unsigned int	count2;

	count1 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	count2 = 0;
	while (src[count2] != '\0' && count2 < nb)
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1++] = '\0';
	return (dest);
}
