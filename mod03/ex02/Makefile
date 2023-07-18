# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2023/07/13 14:52:09 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		:=	FragTrap

INC_DIR		:=	inc
SRCS_DIR	:=	srcs
OBJ_DIR		:=	objs
VPATH		:=	$(subst $(space),:,$(shell find srcs -type d))

SRCS		=	main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp
OBJS		=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

CC			:=	c++
FLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g -I$(INC_DIR)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(notdir %.cpp)
	@ mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

run:	all
	@ ./$(NAME)

clean:
	@ rm -rf $(OBJ_DIR)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re