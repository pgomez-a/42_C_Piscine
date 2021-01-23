# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amalisev <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 13:28:24 by amalisev          #+#    #+#              #
#    Updated: 2020/12/14 13:32:04 by amalisev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
FILES = *.c

.PHONY: all clean fclean re

all:
	@cc -Wall -Wextra -Werror -o $(NAME) $(FILES)

clean:
	@rm -f *.o

normi:
	@norminette

fclean:
	@rm $(NAME)

re: fclean all
