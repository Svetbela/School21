# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halta <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 12:26:45 by halta             #+#    #+#              #
#    Updated: 2021/10/26 15:57:14 by halta            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_isalpha.c	ft_toupper.c	ft_substr.c\
			ft_isdigit.c	ft_tolower.c	ft_strjoin.c\
			ft_isalnum.c	ft_strchr.c		ft_strtrim.c\
			ft_isascii.c	ft_strrchr.c	ft_putchar_fd.c\
			ft_isprint.c	ft_strncmp.c	ft_putstr_fd.c\
			ft_strlen.c		ft_atoi.c		ft_putendl_fd.c\
			ft_memset.c		ft_strdup.c		ft_putnbr_fd.c\
			ft_bzero.c		ft_calloc.c		ft_strmapi.c\
			ft_memcpy.c		ft_memmove.c	ft_striteri.c\
			ft_memchr.c		ft_memcmp.c		ft_itoa.c\
			ft_strlcpy.c	ft_strlcat.c	ft_split.c\
			ft_strnstr.c


HEADER	=	libft.h

OBJS	=	${SRCS:%.c=%.o}

CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror -I${HEADER}

.PHONY	:	all clean fclean re

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
