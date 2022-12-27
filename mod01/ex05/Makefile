# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2022/12/27 16:26:23 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/main.cpp srcs/Harl.cpp

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) $(FLAGS) -Iinc -o $(NAME)

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re