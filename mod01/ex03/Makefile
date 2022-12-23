# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2022/12/23 16:53:56 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Violence
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

SRCS	=	srcs/main.cpp srcs/Weapon.cpp srcs/HumanA.cpp srcs/HumanB.cpp
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