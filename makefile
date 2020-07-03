# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrolland <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 15:14:50 by rrolland          #+#    #+#              #
#    Updated: 2020/07/03 15:51:48 by rrolland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strncmp.c ft_strdup.c ft_atoi.c ft_calloc.c ft_memcmp.c ft_memmove.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_itoa.c \
	ft_strnstr.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_strjoin.c \
	ft_substr.c

#BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
#	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	=	${SRCS:.c=.o}

#OBJSBONUS	=	${BONUS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	ar rc ${NAME} ${OBJS}

bonus:	${OBJS} #${OBJSBONUS}
	ar rcs ${NAME} ${OBJS} #${OBJSBONUS}

all:	${NAME}

clean:
	${RM} ${OBJS} #${OBJSBONUS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY : all clean fclean re
