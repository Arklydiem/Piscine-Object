# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: argomez <argomez@student.42angouleme.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 09:21:09 by argomez           #+#    #+#              #
#    Updated: 2024/01/08 10:48:35 by argomez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *** # Compilation # ******************************************************** #

MAKEFLAGS	=	--no-print-directory
NAME		=	DivideAndRule
CC			=	c++
FLAGS		=	-Iincludes -Wall -Werror -Wextra -std=c++98 -g
RM			=	rm -rf

# *** # Files # ************************************************************** #

SRCS_FILES	=	main	\
				Account	\
				Bank	\

SRCS_PATH	=	$(addsuffix .cpp, $(addprefix srcs/, $(SRCS_FILES)))

OBJS		=	$(SRCS_PATH:.cpp=.o)

# *** # Compilation # ******************************************************** #

%.o: %.cpp
	$(CC) $(FLAGS) -c	 $< -o $@ 

all: $(NAME)

clear:
	clear

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(INCLUDES) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clear clean
	$(RM) $(NAME)

re: fclean all 

rec: fclean $(NAME)
	@ make clean --no-print-directory
	clear

.PHONY: all clean fclean re clear rec