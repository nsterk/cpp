# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2022/12/27 16:30:03 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

SRCS	=	srcs/main.cpp srcs/Zombie.cpp srcs/newZombie.cpp srcs/randomChump.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) $(FLAGS) -Iinc -o $(NAME)

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re