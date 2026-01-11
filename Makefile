NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC = \
	main.c main_operations.c stack.c fill_stack.c indexing.c radix_sort.c
OBJ	= $(SRC:.c=.o)

LIBS_DIR = ./libft

HEADERS = -I$(LIBS_DIR)
LDFLAGS = -L$(LIBS_DIR)
LDLIBS = -lft -lftprintf

%.o: %.c
		$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(NAME) : $(OBJ)
		$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re