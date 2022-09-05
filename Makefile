# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 13:27:07 by hugrene           #+#    #+#              #
#    Updated: 2022/04/20 13:27:08 by hugrene          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Wextra -Werror

FILES = ft_printf supfunc supfunc2 parser pointerparser
SRCS = $(FILES:%=%.c)
OBJS = $(FILES:%=%.o)

NAME = libftprintf.a


GRAY = \033[0;90m
DARK = \033[0;30m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all:		$(NAME)

$(NAME):	$(OBJS)
			@make -C libft
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@ar rc $(NAME) $(OBJS)
			@echo "$(GREEN)ft_printf is Compiled!"

%.o: 		%.c
			@echo "$(YELLOW)Compiling: $< $(BLUE)"
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@rm -rf $(OBJS)
			@make clean -C libft
			@echo "$(CYAN)ft_printf Cleaned"

fclean:		clean
			@rm -f $(NAME)
			@rm -f libft/libft.a
			@echo "$(MAGENTA)Fully Cleaned"

re:			fclean all
			@echo "$(GREEN)Rebuild Done"

norm:
			@echo "$(DARK)"
			@norminette

.PHONY:		all clean fclean re norm
