# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-kadh <ael-kadh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/25 02:16:49 by jyim              #+#    #+#              #
#    Updated: 2014/05/03 12:30:36 by ael-kadh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_script

SRC = ft_script.c fill_script.c ft_termcaps.c m_strdup.c m_strjoinwsep.c\
		m_strnew.c m_strsplit.c m_strsub.c main.c move.c script_cmd.c

OBJ = $(SRC:.c=.o)

FLAGS = -g3 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@cc $(OBJ) -L libft -lft libft/printf/libftprintf.a -o $(NAME)

%.o: %.c
	@cc $(FLAGS) -c -I libft/ -I libft/printf/includes $<

clean:
	@/bin/rm -f $(OBJ)
	@make -C libft/ clean

fclean: clean
	@/bin/rm -f $(NAME) 
	@make -C libft/ fclean

re: fclean all
