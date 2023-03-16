# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2023/02/11 20:38:54 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Fixed
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address

SRCS	=	srcs/main.cpp srcs/Fixed.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) $(FLAGS) -Iinc -o $(NAME)

run:	all
	@ ./Fixed

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re