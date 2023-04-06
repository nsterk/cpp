# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2023/03/26 23:23:44 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Fixed
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -Iinc

SRCS	=	srcs/main.cpp srcs/Fixed.cpp srcs/tests.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

run:	all
	@ ./Fixed

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re