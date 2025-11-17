# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpfannen <dpfannen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/10 15:36:00 by dpfannen          #+#    #+#              #
#    Updated: 2025/11/12 18:36:48 by dpfannen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -Ilibft
OBJ_FILES = ft_printf.c
OBJS = $(OBJ_FILES:.c=.o)
LIBFT = -C libft

all: $(NAME)

$(LIBFT): 
	make $(LIBFT)
$(NAME): $(OBJS) $(LIBFT)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS) 

clean:
	make clean $(LIBFT)
	rm -f $(OBJS)

re: fclean all

fclean: clean
	make fclean $(LIBFT)
	rm -f $(NAME)
	
.PHONY: all clean re fclean

# (Nil) for pointers
# (null) for str 
# cp /libft/libft.a
# -I