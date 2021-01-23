/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_words.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 17:43:00 by pgomez-a          #+#    #+#             */
/*   Updated: 2020/12/16 17:48:43 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_find_obs(char *buffer)
{
	int		count;

	count = 0;
	while (buffer[count] != 10)
		count++;
	return (buffer[count - 2]);
}

char	ft_find_empty(char *buffer)
{
	int		count;

	count = 0;
	while (buffer[count] != 10)
		count++;
	return (buffer[count - 3]);
}

char	ft_write(char *buffer)
{
	int		count;

	count = 0;
	while (buffer[count] != 10)
		count++;
	return (buffer[count - 1]);
}

int		ft_row_len_int(char *buffer, int rows)
{
	int		row_len;
	int		count;

	row_len = 0;
	count = 0;
	while (buffer[count] != '\0')
		count++;
	row_len = count / rows;
	row_len *= rows;
	return (row_len);
}

int		ft_row_len_char(char *buffer)
{
	int		row_len;
	int		i;
	int		z;
	int		t_size;

	i = 0;
	z = 0;
	t_size = 0;
	row_len = 0;
	while (buffer[t_size] != '\0')
		t_size++;
	while (buffer[i] != 10)
	{
		i++;
		z++;
	}
	z++;
	i++;
	while (buffer[i] != 10)
	{
		row_len++;
		i++;
	}
	return (row_len);
}
