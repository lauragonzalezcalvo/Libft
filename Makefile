CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

COMPILE = ${CC} ${CFLAGS}

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlcat.c ft_atoi.c ft_calloc.c\
ft_memcpy.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_memmove.c ft_strchr.c ft_substr.c ft_putendl_fd.c\
ft_memchr.c ft_memcmp.c ft_strdup.c ft_strmapi.c ft_striteri.c ft_tolower.c ft_strjoin.c ft_putnbr_fd.c\
ft_strrchr.c ft_strnstr.c ft_putchar_fd.c ft_itoa.c ft_toupper.c ft_strncmp.c ft_putstr_fd.c ft_split.c
OBJ = ${SRC:%.c=%.o} 

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

%.o: %.c
	$(COMPILE) -c $< -o $@

# Cleaning

clean:
	@echo Limpiando los .o ...
	@rm -f ${OBJ}
	@echo OK

fclean: clean
	@echo ${OBJ} borrados correctamente
	@rm -f ${NAME}
re: fclean all
