# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2023/04/06 16:51:53 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Fixed
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/main.cpp srcs/Fixed.cpp srcs/tests.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -Iinc -o $(NAME)

run:	all
	@ ./Fixed

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re