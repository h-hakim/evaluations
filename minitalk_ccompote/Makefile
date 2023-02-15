# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccompote <ccompote@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 19:40:17 by ccompote          #+#    #+#              #
#    Updated: 2022/11/21 17:29:27 by ccompote         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc 
CFLAGS = -Wall -Wextra -Werror 
NAME = client
NAME_SERVER = server
SRC_CLIENT = client.c minitalk_utils.c
SRC_SERVER = server.c minitalk_utils.c

all : $(NAME) $(NAME_SERVER) 

$(NAME_SERVER) : $(SRC_SERVER) 
	$(CC) $(CFLAGS) $(SRC_SERVER) -o $@

$(NAME) : $(SRC_CLIENT) 
	$(CC) $(CFLAGS) $(SRC_CLIENT) -o $@ 

clean:
	rm -f $(NAME) $(NAME_SERVER)

fclean: clean
	rm -rf server.dSYM/
	rm -rf client.dSYM/

re: fclean all 

.PHONY: clean fclean re all 