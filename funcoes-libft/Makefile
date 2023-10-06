NAME = libft.a 

CC	= cc 
CFLAGS	= -Wall -Wextra -Werror
AR	= ar 
ARFLAGS	= rcs
RM	= rm
RMFLAGS	= -f

OBJ	= ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_strlen.o \
	ft_memset.o \
	ft_bzero.o \
	ft_memmove.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_strchr.o \
	ft_strlen.o \
	ft_strncmp.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_atoi.o

all: $(NAME) 

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all 