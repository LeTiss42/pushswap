# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 22:58:50 by mravera           #+#    #+#              #
#    Updated: 2022/09/23 20:52:34 by mravera          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Wextra -Werror
RM := rm -f
NAME := push_swap

SRCS := $(wildcard *.c)
OBJECTS := $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	rm -f *.o
	
fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
