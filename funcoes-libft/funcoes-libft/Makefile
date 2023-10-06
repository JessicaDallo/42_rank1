NOME = libft.a #nome que vai criar 

CC = cc 
CFLAGS = -Wall -Wextra -Werror
AR = ar #comando que cria a biblio
ARFLAGS = rcs
RM = rm
RMFLAGS = -f

OBJ	= ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_strlen.o \
	ft_memset.o \
	ft_bzero.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_toupper.o \
	ft_tolower.o \
	ft_strchr.o \
	ft_strncmp.o \
	ft_atoi.o 
	
#nomes de todos os ficheiros.c ja compilados ficheiros.o

all: $(NOME) 

$(NOME) : $(OBJ)
	$(AR) $(ARFLAGS) $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	$(RM) $(RMFLAGS) $(NOME)

re: fclean all 