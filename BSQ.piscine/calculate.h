/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:00:54 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 19:04:44 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATE_H
# define CALCULATE_H

int		ft_calculate_file(char *map);
int		ft_calculate_file(char *map);
int		ft_atoi(char *str);
char	ft_find_obs(char *buffer);
char	ft_find_empty(char *buffer);
char	ft_write(char *buffer);
int		ft_row_len_int(int *buffer, int rows);
int		ft_row_len_char(char *buffer);
int		ft_row_size_char(char *buffer);
int		ft_min(int a, int b, int c);
int		ft_calculate_position(int xpos, int num, int result, int pos);
void	ft_find_size(char *buffer, int *array, int result, int pos);
void	ft_assign_values(char *buffer, int *array, int rows, int cols);
void	ft_create_map(char *map);

#endif
