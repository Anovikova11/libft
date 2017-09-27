# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/11 13:01:35 by jtahirov          #+#    #+#              #
#    Updated: 2017/09/21 18:36:55 by alnoviko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR = ar
CC = gcc
SRC = $(wildcard ./sources/*.c)
HDR_PATH = includes/
OBJ = ./*.o
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I $(HDR_PATH) 
ARFLAGS = -cqv

all: $(NAME)

$(NAME): $(SRC)
	$(CC) -c $(CFLAGS) $^
	$(AR) $(ARFLAGS) $@ $(OBJ)

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
