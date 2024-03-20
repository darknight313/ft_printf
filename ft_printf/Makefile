CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC_DIR = src
LIBFT_DIR = libft

SRC = create_obj.c execute_char.c execute_int.c execute_p.c execute_u.c flags_checker.c ft_execute.c ft_printf.c hex.c utils.c
LIBFT_SRC = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_memset.c ft_print.c ft_putchar_fd.c ft_putstr_fd.c \
            ft_strlen.c ft_tolower.c ft_toupper.c ft_unsigned_nbr.c

OBJ = $(patsubst %.c, $(SRC_DIR)/%.o, $(SRC))
LIBFT_OBJ = $(patsubst %.c, $(LIBFT_DIR)/%.o, $(LIBFT_SRC))

all : $(NAME)

$(OBJ) : $(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_OBJ) : $(LIBFT_DIR)/%.o : $(LIBFT_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) $(LIBFT_OBJ)
	ar rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

clean :
	rm -f $(SRC_DIR)/*.o $(LIBFT_DIR)/*.o

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
