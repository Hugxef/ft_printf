# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugrene <hugrene@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 11:47:38 by hugrene           #+#    #+#              #
#    Updated: 2022/04/26 11:47:39 by hugrene          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Wextra -Werror

FILES = 	isalpha \
			isdigit \
			isalnum \
			isascii \
			isprint \
			strlen \
			memset \
			bzero \
			memcpy \
			memmove \
			strlcpy \
			strlcat \
			toupper \
			tolower \
			strchr \
			strrchr \
			strncmp \
			memchr \
			memcmp \
			strnstr \
			atoi \
			calloc \
			strdup \
			substr \
			strjoin \
			strtrim \
			split \
			itoa \
			strmapi \
			striteri \
			putchar_fd \
			putstr_fd \
			putendl_fd \
			putnbr_fd \
			uitoa

FBONUS = 	lstnew \
			lstadd_front \
			lstsize \
			lstlast \
			lstadd_back \
			lstdelone \
			lstclear \
			lstiter \
			lstmap
SRCS = $(FILES:%=ft_%.c)
OBJS = $(FILES:%=ft_%.o)
BSRCS = $(FBONUS:%=ft_%.c)
BOBJS = $(FBONUS:%=ft_%.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(BOBJS)
	ar rc $(NAME) $(OBJS) $(BOBJS)

.PHONY: all clean fclean re bonus
