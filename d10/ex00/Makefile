# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 10:09:04 by wjeffry           #+#    #+#              #
#    Updated: 2019/07/15 15:24:40 by wjeffry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

HFILE = ./includes/

all: $(NAME)
$(NAME):
	gcc -c $(SRC) -I $(HFILE)
	ar rc $(NAME) ./*.o
	
clean:
	/bin/rm  -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all

