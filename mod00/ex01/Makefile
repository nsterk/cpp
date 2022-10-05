# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2022/10/05 21:20:14 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Phonebook
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

SRCS	=	srcs/Contact.cpp srcs/main.cpp srcs/Phonebook.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) $(FLAGS) -Iinc -o Phonebook

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re