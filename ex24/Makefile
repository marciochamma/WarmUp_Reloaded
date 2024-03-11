NAME = libft.a
FLAG = -Werror -Wextra -Wall

SRC_DIR = srcs
INC_DIR = includes

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	srcs/ft_strlen.c srcs/ft_swap.c
OBJ = $(SRC:.c=.o)
 
all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: $(SRC_DIR)/%.c
	gcc $(FLAG) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all