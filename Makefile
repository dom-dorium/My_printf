# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 13:07:44 by djeannot          #+#    #+#              #
#    Updated: 2022/05/08 15:16:22 by djeannot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

RM			= rm -f

LIB			= ar rcs

SRCS		= ft_print_cs.c ft_print_diu.c ft_print_pxX.c ft_printf.c libft/ft_strlen.c libft/ft_nblen.c

OBJS		= $(SRCS:.c=.o)

all : $(NAME)

$(NAME):	$(OBJS)

			$(LIB) $(NAME) $(OBJS)

clean :
			$(RM) $(OBJS)

fclean :	clean
			$(RM) $(NAME)

re :		fclean $(NAME)

.PHONY:		all clean fclean re
