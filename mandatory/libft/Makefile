# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguinea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/15 11:09:45 by aguinea           #+#    #+#              #
#    Updated: 2024/12/05 19:25:15 by aguinea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isascii.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
       ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
       ft_memset.c ft_strnstr.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_memcmp.c ft_memchr.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strtrim.c \
       ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
      ft_putendl_fd.c  ft_putnbr_fd.c ft_substr.c ft_putstr_fd.c ft_atoi_hex.c \
      ft_auxiliar_printf.c  ft_aux_printf.c ft_printf.c ft_typeofprint.c \
	  get_next_line.c\

SRCS_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
	     ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
	     ft_lstmap.c ft_lstnew.c ft_lstsize.c \

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY: re fclean clean all
