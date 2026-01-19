NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = \
	stack.c stack2.c main_operations.c fill_stack.c \
	indexing.c input_validation.c radix_sort.c small_sort.c main.c

OBJ	= $(SRC:.c=.o)

LIBS_DIR = ./libft
LIBFT = $(LIBS_DIR)/libft.a


HEADERS = -I. -I$(LIBS_DIR)/inc

LDFLAGS = -L$(LIBS_DIR)
LDLIBS = -lft

%.o: %.c
		$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(NAME) : $(LIBFT) $(OBJ)
		$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $(NAME)

$(LIBFT):
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