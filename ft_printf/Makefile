CC = cc

# Compiler flags
# CFLAGS = -Wall -Wextra -Werror

# Library Name
NAME = libftprintf.a

PRINTF_SRCS = $(filter-out zest.c, $(wildcard *.c))

OBJS = $(PRINTF_SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Complete list of Rules
# Rule to make the library
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus:$(NAME)

clean:
	rm -f $(OBJS)

# Rule to clean everything
fclean: clean
	rm -f $(NAME)

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re
