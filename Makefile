# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 14:31:23 by mklevero          #+#    #+#              #
#    Updated: 2025/06/23 14:59:22 by mklevero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
HEADERS = push_swap.h

SRCS = push_swap.c stack_op.c ft_split.c ft_basic_utils.c free.c \
check_functions.c sort_alg.c sort_op.c swap.c push.c rotate.c \
rev_rot.c sort_op_2.c

OBJ = $(SRCS:.c=.o)
.SECONDARY: $(OBJ)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT) $(HEADERS)
		$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

clean:
		rm -f $(OBJ)
		make clean -C $(LIBFT_DIR)
fclean: clean
		rm -f $(NAME) $(LIBFT)
re: fclean all

.PHONY: all clean fclean re 
