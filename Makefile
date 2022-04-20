# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 17:58:53 by fahd              #+#    #+#              #
#    Updated: 2022/04/20 01:04:33 by fstitou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker

SRC = push_swap.c actions.c basic_sort.c  utils.c utils2.c\
		actionss.c to_treat.c radix_helper.c utils3.c\
		actions_bonus.c actions_bonus1.c treatment.c\
		
SRC_BONUS =	checker.c get_next_line.c get_next_line_utils.c \
			actions.c basic_sort.c  utils.c utils2.c\
			actionss.c to_treat.c radix_helper.c utils3.c\
			actions_bonus.c actions_bonus1.c treatment.c\
		


OBJ =  actions.o basic_sort.o push_swap.o utils.o util2.o\
		actionss.o to_treat.o radix_helper.o utils3.o\
		actions_bonus.o actions_bonus1.o treatment.o\

OBJ_BONUS = checker.o get_next_line.o get_next_line_utils.o\
			actions.o basic_sort.o  utils.o utils2.o\
			actionss.o to_treat.o radix_helper.o utils3.o\
			actions_bonus.o actions_bonus1.o treatment.o\

all : $(NAME)

$(NAME):
	
	@gcc -Wall -Wextra -Werror  $(SRC) -o $(NAME)
	@echo "suii 👍👍👍"

$(NAME_BONUS) : 
	@gcc -Wall -Wextra -Werror  $(SRC_BONUS) -o $(NAME_BONUS)
	@echo "🎁🎁🎁"

bonus: $(NAME_BONUS)

clean :
 
	@rm -f $(OBJ) $(OBJ_BONUS)
	@echo "🚮🚮🚮"

fclean : clean
	@rm -f $(NAME) $(NAME_BONUS)
	@echo "🗑️ 🗑️ 🗑️"

re : fclean all