# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 11:16:34 by brumarti          #+#    #+#              #
#    Updated: 2024/06/11 18:05:56 by brumarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -I./inc

SRCS = tests.cpp \
		srcs/Account.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean