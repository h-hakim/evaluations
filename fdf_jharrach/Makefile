# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jharrach <jharrach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 22:00:28 by jharrach          #+#    #+#              #
#    Updated: 2023/01/10 17:37:34 by jharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fdf

SRC_FDF		= main drawings init_fdf init_lines set_center print_keys\
	line_clipping user_input vectors matrices load_file terminate
LIBFT_NAME	= libft.a
MLX_NAME	= libmlx42.a

SRC_DIR		= src/
OBJ_DIR		= obj/
LIBFT_DIR	= libft/
MLX_DIR		= MLX42/

OBJ			+= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FDF)))
LIBFT		+= $(addprefix $(LIBFT_DIR), $(LIBFT_NAME))
MLX			+= $(addprefix $(MLX_DIR), $(MLX_NAME))

CC			= clang
CFLAGS		= -Wall -Wextra -Werror
LOADLIBES	= -lglfw -lm
RM			= rm -fr

# glfw installation MAC:
# 	cd ~ && mkdir ./homebrew && curl -L https://github.com/Homebrew/brew/tarball/master | tar xz --strip 1 -C homebrew
# 	echo 'PATH="$HOME/homebrew/bin:$PATH"' >> ~/.bash_profile
# 	echo 'PATH="$HOME/homebrew/bin:$PATH"' >> ~/.zshrc
# 	brew install glfw

# glfw installation Linux:
# 	sudo apt install libglfw3-dev

ifneq ($(shell uname), Linux)
GLFW_DIR	= $(shell brew info glfw | awk 'NR==4{print $$1}')
LOADLIBES	+= $(addprefix -L, $(addsuffix /lib/, $(GLFW_DIR)))
endif

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(CYAN)	$(LIBFT)$(DEF_COLOR)"
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "$(CYAN)	$(MLX)$(DEF_COLOR)"
	@$(MAKE) -C $(MLX_DIR)
	@echo "$(BLUE)	$@$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(LOADLIBES) $(OBJ) $(LIBFT) $(MLX) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | objdir
	@echo "$(BLUE)	$<$(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

objdir:
	@mkdir -p $(OBJ_DIR)

clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(MAKE) clean -C $(MLX_DIR)
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(LIBFT)
	@$(RM) $(NAME)
	@$(RM) $(MLX42)

re: fclean all

.PHONY: all clean fclean re objdir
