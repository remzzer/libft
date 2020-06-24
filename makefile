# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrolland <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/23 15:54:51 by rrolland          #+#    #+#              #
#    Updated: 2020/06/24 14:40:08 by rrolland         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

RM		= rm -rf

CC		= gcc

CFLAGS	= -Wextra -Werror -Wall

all:		$(NAME)

$(NAME):		$(OBJS)
					ar rcs $(NAME) $(OBJS)

%.o:		%.c
					$(CC) $(CFLAGS) -c $< -o $@

clean:
					$(RM) $(OBJS)

fclean:			clean
					$(RM) $(NAME)
