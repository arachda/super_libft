# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arachda <arachda@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 23:03:40 by arachda           #+#    #+#              #
#    Updated: 2023/11/30 12:46:09 by arachda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

MAIN_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
    ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
    ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
    ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
    ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SOURCES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
    ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

MAIN_OBJECTS = $(MAIN_SOURCES:.c=.o)
BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

$(NAME) : $(MAIN_OBJECTS)
	ar -r $(NAME) $(MAIN_OBJECTS)

%.o: %.c libft.h
	@$(CC) -c $(CFLAGS) $< -o $@
	@echo "Compiling $<"

all : $(NAME)

bonus : $(BONUS_OBJECTS)
	ar -r $(NAME) $(BONUS_OBJECTS)

clean :
	@rm -f $(MAIN_OBJECTS) $(BONUS_OBJECTS)

fclean : clean
	@rm -f $(NAME)

re : fclean all