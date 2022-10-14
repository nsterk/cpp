# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2022/10/13 19:49:55 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	Phonebook
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address 

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