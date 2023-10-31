# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 17:25:22 by marvin            #+#    #+#              #
#    Updated: 2023/10/28 17:25:22 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar
ARFLAGS	= -rcs
RM	= rm
RMFLAGS = -f

SOURCES = 

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)
	
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(RMFLAGS) $(OBJ)
fclean: clean
	$(RM) $(RMFLAGS) $(NAME).

re: fclean all