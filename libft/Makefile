# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmichel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 18:36:37 by thmichel          #+#    #+#              #
#    Updated: 2024/10/14 18:43:07 by thmichel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_calloc.c \
      ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
      ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_strchr.c \
      ft_strrchr.c ft_atoi.c ft_strnstr.c ft_memmove.c ft_strncmp.c \
      ft_memcmp.c ft_strlcpy.c ft_putchar_fd.c ft_putstr_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c ft_substr.c ft_split.c \
      ft_toupper.c ft_tolower.c ft_strdup.c ft_itoa.c ft_strtrim.c ft_strmapi.c \
      ft_striteri.c ft_strlcat.c

SRCBON = ft_lsnew_bonus.c
OBJ = $(SRC:.c=.o) $(SRCBON:.c=.o)

all: $(NAME)

bonus: $(OBJ) $(SRCBON:.c=.o)
	ar rcs $(NAME) $(OBJ) $(SRCBON:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

