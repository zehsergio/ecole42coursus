# =======================
#   Libft - Makefile
# =======================

# ---- Basic config ----
NAME     = libft.a
CC       = cc
CFLAGS   = -Wall -Wextra -Werror
CPPFLAGS = -I .
AR       = ar
ARFLAGS  = rcs
RM       = rm -f

# ---- Source files ----
SRC = \
	ft_isalpha.c \
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
	ft_strnstr.c

# ---- Object files ----
OBJ = $(SRC:.c=.o)

# ---- Debug mode (make DEBUG=1 or make debug) ----
ifeq ($(DEBUG),1)
CFLAGS += -g -O0
endif

# ---- Default rule ----
all: $(NAME)

# ---- Build library ----
$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@echo "✅ Library $(NAME) compiled successfully."

# ---- Compile .c to .o ----
%.o: %.c libft.h
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

# ---- Build test executable ----
tests: $(NAME) tests.c
	$(CC) $(CFLAGS) $(CPPFLAGS) tests.c $(NAME) -o tests
	@echo "✅ Tests compiled. Run with: ./tests"

# ---- Build everything in debug mode ----
debug: CFLAGS += -g -O0
debug: re tests
	@echo "🐞 Debug build ready. Use 'lldb ./tests' to debug."

# ---- Clean object files ----
clean:
	$(RM) $(OBJ)
	@echo "🧹 Object files removed."

# ---- Clean everything ----
fclean: clean
	$(RM) $(NAME) tests
	@echo "🗑️  Library and test binary removed."

# ---- Rebuild everything ----
re: fclean all

.PHONY: all clean fclean re tests debug
