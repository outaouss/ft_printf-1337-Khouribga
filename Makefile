# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: outaouss <outaouss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/01 17:55:35 by outaouss          #+#    #+#              #
#    Updated: 2025/11/04 23:57:46 by outaouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAG = -Wall -Werror -Wextra

SRCS = ft_p_print.c ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_unsigned_print.c\
		ft_hex_print.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo	"$(NAME) created"
	@echo "$(NAME) indexed"

%.o: %.c ft_printf.h
	cc $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "$(OBJ) Deleted Sucessfully"

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: clean