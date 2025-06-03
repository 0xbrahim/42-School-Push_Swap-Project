# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahmed <bahmed@student.42abudhabi.ae>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 07:47:32 by bahmed            #+#    #+#              #
#    Updated: 2025/05/23 07:47:33 by bahmed           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	push_swap.c \
		ft_split.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_substr.c \
		push.c \
		rotate.c \
		swap.c \
		chunk_sort.c \
		small_sort.c \
		helper.c \
		normalize.c \
		utils.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
