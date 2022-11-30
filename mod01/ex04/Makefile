# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2022/11/30 20:17:42 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=	LoserSed
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

SRCS	=	srcs/main.cpp srcs/Sed.cpp srcs/FileStreams.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all:	$(NAME)

$(NAME): $(SRCS)
	$(CC) $(SRCS) $(FLAGS) -Iinc -o LoserSed

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re