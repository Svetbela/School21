# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halta <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 15:37:04 by halta             #+#    #+#              #
#    Updated: 2021/11/28 14:17:51 by halta            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_putstr.c ft_itoa.c ft_itoabase.c ft_itoahex.c

HEADER	=	ft_printf.h

OBJS	=	${SRCS:%.c=%.o}

CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror -I${HEADER}

.PHONY	=	all clean fclen re

all		:	${NAME}

${NAME}	:	${OBJS} ${HEADER}
	ar rcs ${NAME} $?

%.o		:	%.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@

clean	:
	@rm -f ${OBJS}

fclean	:	clean
	@rm -f ${NAME}

re		:	fclean all
