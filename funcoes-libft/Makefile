NAME = libft.a 

CC	= cc 
CFLAGS	= -Wall -Wextra -Werror
AR	= ar 
ARFLAGS	= -rcs
RM	= rm
RMFLAGS	= -f

OBJ	= ft_atoi.o \
	ft_bzero.o \
	ft_calloc.o \
	ft_itoa.o \
	ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_memset.o \
	*ft_memchr.o \
	ft_memcmp.o \
	ft_putendl_fd.o \
	ft_putnbr_fd.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_strchr.o \
	ft_strlen.o \
	ft_strncmp.o \
	ft_strlcat.o \
	ft_strnstr.o \
	ft_strrchr.o \
	ft_strlcpy.o \
	ft_striteri.o \
	ft_strdup.o \
	ft_strjoin.o \
	ft_strtrim.o \
	ft_strmapi.o \
	ft_substr.o \
	ft_toupper.o \
	ft_tolower.o 

	
	
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