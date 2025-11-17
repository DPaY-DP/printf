# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 15:18:23 by dpfannen          #+#    #+#              #
#    Updated: 2025/11/03 15:18:02 by dpfannen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJ_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strlen.c ft_memset.c ft_memcpy.c \
ft_memmove.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
ft_strnstr.c ft_atoi.c ft_bzero.c ft_calloc.c ft_strdup.c ft_strlcpy.c \
ft_strjoin.c ft_strtrim.c ft_substr.c ft_putchar_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_putstr_fd.c ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c
BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS = $(BONUS_FILES:.c=.o)
OBJS = $(OBJ_FILES:.c=.o)

.PHONY: all clean re fclean bonus
all: $(NAME)
	
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f *.o

re: fclean all

fclean: clean
	rm -f $(NAME)
	
bonus: $(OBJS) $(BONUS)
	ar -rcs $(NAME) $(OBJS) $(BONUS)
	





