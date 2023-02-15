# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 18:19:07 by jharrach          #+#    #+#              #
#    Updated: 2022/12/08 00:49:49 by jharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC_1 =	ft_atoi\
		ft_bzero\
		ft_calloc\
		ft_isalnum\
		ft_isalpha\
		ft_isascii\
		ft_isdigit\
		ft_isprint\
		ft_memchr\
		ft_memcmp\
		ft_memcpy\
		ft_memmove\
		ft_memset\
		ft_strchr\
		ft_strdup\
		ft_strlcat\
		ft_strlcpy\
		ft_strlen\
		ft_strncmp\
		ft_strnstr\
		ft_strrchr\
		ft_tolower\
		ft_toupper

SRC_2 =	ft_itoa\
		ft_putchar_fd\
		ft_putendl_fd\
		ft_putnbr_fd\
		ft_putstr_fd\
		ft_split\
		ft_striteri\
		ft_strjoin\
		ft_strmapi\
		ft_strtrim\
		ft_substr

SRC_B =	ft_lstadd_back\
		ft_lstadd_front\
		ft_lstclear\
		ft_lstdelone\
		ft_lstiter\
		ft_lstlast\
		ft_lstmap\
		ft_lstmap\
		ft_lstnew\
		ft_lstsize\

SRC_PRINTF =	ft_placeholder\
				ft_printf_c\
				ft_printf_d\
				ft_printf_p\
				ft_printf_s\
				ft_printf_u\
				ft_printf_x\
				ft_printf

SRC_GET_NEXT_LINE =	get_next_line

CC		= clang
INCLUDE	= -Iinclude
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror
ARFLAGS	= rcs

SRC_DIR	= src/
OBJ_DIR	= obj/

SRC		+= $(addprefix src_1/, $(SRC_1))
SRC		+= $(addprefix src_2/, $(SRC_2))
SRC		+= $(addprefix src_b/, $(SRC_B))
SRC		+= $(addprefix src_printf/, $(SRC_PRINTF))
SRC		+= $(addprefix src_get_next_line/, $(SRC_GET_NEXT_LINE))
OBJ		= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | objdir
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

objdir:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)src_1
	@mkdir -p $(OBJ_DIR)src_2
	@mkdir -p $(OBJ_DIR)src_b
	@mkdir -p $(OBJ_DIR)src_printf
	@mkdir -p $(OBJ_DIR)src_get_next_line

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re objdir
