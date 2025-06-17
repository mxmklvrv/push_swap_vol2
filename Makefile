# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/30 14:31:23 by mklevero          #+#    #+#              #
#    Updated: 2025/06/17 16:16:27 by mklevero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c stack_op.c ft_split.c ft_basic_utils.c free.c \
check_functions.c sort_alg.c sort_op.c swap.c push.c rotate.c \
rev_rot.c sort_op_2.c

OBJ = $(SRCS:.c=.o)
.SECONDARY: ${OBJ}

NAME = push_swap
CC = cc -g 
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re 
