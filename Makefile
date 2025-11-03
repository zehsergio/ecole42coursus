
################################################################################
## ARGUMENTS

NAME	= libft.a
CFLAGS	= -Wall -Wextra -Werror -g
cc	= gcc

################################################################################
## SOURCES

HEADER = libft.h

OPTION = -c -I $(HEADER)

SRC_FILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \

OBJ_FILES =  $(SRC_FILES:.c=.o)

################################################################################
## RULES

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(OPTION) $(SRC_FILES)
	ar rc $(NAME) $(OBJ_FILES)
	
clean: 
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re