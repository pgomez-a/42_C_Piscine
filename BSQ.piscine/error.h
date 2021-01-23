/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalisev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:55:50 by amalisev          #+#    #+#             */
/*   Updated: 2020/12/16 19:04:59 by amalisev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

void	ft_error(void);
int		ft_validate(char *map, int lastnbr, int rows);
int		ft_row_len(char *buffer);
int		nl_end_file(char *buffer, int rows);
int		read_map(char *buffer, int lastnbr);
int		ft_calculate_file(char *map);
int		ft_fewarg(char *map, int lastnbr);
void	ft_close(int fd, char *buffer);

#endif
