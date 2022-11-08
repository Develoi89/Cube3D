# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 13:15:04 by zpalfi            #+#    #+#              #
#    Updated: 2022/11/06 12:55:26 by develoi89        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= get_next_line.a


SRC			= src/get_next_line.c \
			  src/get_next_line_utils.c \


OBJ		= $(SRC:%.c=%.o)
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc

$(NAME): $(OBJ) include/get_next_line.h
	@ar rc $(NAME) $(OBJ)
	@echo "Compiling get_next_line.a"

.PHONY : clean
clean:
	@rm -f *.o

.PHONY : fclean
fclean: clean
	@rm -f $(NAME)

.PHONY : all
all: $(NAME)

.PHONY : re
re: fclean all
