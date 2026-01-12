NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

SRC = \
	stack.c main_operations.c fill_stack.c indexing.c input_validation.c radix_sort.c main.c

OBJ	= $(SRC:.c=.o)

LIBS_DIR = ./libft

LIBFT_FILE = $(LIBS_DIR)/libft.a
PRINTF_FILE = $(LIBS_DIR)/libftprintf.a

HEADERS = -I$(LIBS_DIR)
LDFLAGS = -L$(LIBS_DIR)
LDLIBS = -lft -lftprintf

%.o: %.c
		$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(NAME) : $(LIBFT_FILE) $(OBJ)
		$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $(NAME)

$(LIBFT_FILE):
		$(MAKE) -C $(LIBS_DIR)

all: $(NAME)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBS_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBS_DIR) fclean

re: fclean all

.PHONY: all clean fclean re