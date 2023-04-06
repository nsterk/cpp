# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nsterk <nsterk@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/04/13 14:42:55 by nsterk        #+#    #+#                  #
#    Updated: 2023/04/06 20:53:30 by nsterk        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		:=	Fixed
CC			:=	c++
FLAGS		:=	-Wall -Wextra -Werror -std=c++98 -Iinc

# Directories
INCL_DIR	:=	inc
SRCS_DIR	:=	srcs
OBJ_DIR		:=	objs
# What is VPATH: https://www.gnu.org/software/make/manual/html_node/General-Search.html
# subst will replace every space with the 
VPATH		:=	$(subst $(space),:,$(shell find $(SRCS_DIR) -type d))

# Srcs
SRCS		=	main.cpp Fixed.cpp
OBJS		=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(notdir %.cpp)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -I$(INCL_DIR) -o $@

run:	all
	@ $(NAME)
	@ echo $(subst $(space),:,$(shell find $(SRCS_DIR) -type d))

clean:
	@ rm -rf $(OBJS)

fclean: clean
	@ rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re