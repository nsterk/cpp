# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2022/08/25 20:07:53 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

SRCS		=	Megaphone.cpp
OBJS		=	$(SRCS:%.c=%.o)

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) $(FLAGS) $(LIBS) -o megaphone

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re