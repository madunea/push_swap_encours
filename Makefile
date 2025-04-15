# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marieduneau <marieduneau@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 13:27:59 by maduneau          #+#    #+#              #
#    Updated: 2025/03/21 13:10:48 by marieduneau      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	algo_utils.c\
		big_algo.c\
		big_algo_op.c\
		big_algo_utils.c\
		cost.c\
		free.c\
		init.c\
		main.c\
		mini_algo.c\
		op_push.c\
		op_reverse_rotate.c\
		op_rotate.c\
		op_swap.c\
		parsing.c\

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)
	
all: $(LIBFT) $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# obj:
# 	mkdir -p obj

clean:
	rm -rf $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re = fclean all

.PHONY: all clean fclean re


# all = $(NAME)

# $(NAME) : $(OBJ)
# 	ar rcs $(NAME) $(OBJ)

# %.o : %.c
# 	$(CC) $(CFLAGS) -c $< -o $@
 
# clean = rm -f $(OBJ)

# fclean = rm -f $(NAME)

# re = fclean all