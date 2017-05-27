# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavagner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 16:39:42 by mavagner          #+#    #+#              #
#    Updated: 2016/07/19 23:19:52 by mavagner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)

CC = gcc -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

EXEC = do-op


$(EXEC): $(OBJ)
	$(CC) -o $(EXEC) $^

all: $(EXEC)

norme:
	norminette -R CheckForbiddenSourceHeader $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all
