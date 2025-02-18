# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 17:37:43 by knieves-          #+#    #+#              #
#    Updated: 2025/01/16 17:20:24 by knieves-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
       ft_memset.c ft_calloc.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c ft_strlcpy.c ft_strlcat.c ft_strlen.c \
       ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c ft_substr.c \
       ft_strtrim.c ft_split.c ft_strmapi.c ft_toupper.c ft_tolower.c \
       ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strncmp.c ft_memcmp.c ft_strjoin.c ft_itoa.c
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	     ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	     ft_lstmap.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@echo "Library compiled successfully."

bonus: $(OBJS) $(BONUS_OBJS)
	@ar rcs $(NAME) $^
	@echo "Bonus functions added to libft.a"

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "Libft and object files removed."

re: fclean all
