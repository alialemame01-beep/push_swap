*This project has been created as part of the 42 curriculum by aalemami@student.42amman.com*

# Push_swap
*Because Swap_push doesn’t feel as natural*

## Description
The goal is to sort a stack of integers using only 2 stacks (a and b) and a limited set of operations. The goal is to sort the stack using minimum number of operations (smalles number at top).
I chose radix sort to sort the stack.
libft and ft_printf were included in this project.

## Algorithm
- **Radix Sort**: Sorts numbers bit by bit.
- **Indexing**: Maps input values to their sorted positions (0 to n-1)
- Sorts from least significant bit to most significant bit

## Available Operations
- `sa`, `sb`, `ss`: swap first 2 elements
- `pa`, `pb`: push from one stack to another
- `ra`, `rb`, `rr`: rotate stack up
- `rra`, `rrb`, `rrr`: rotate stack down

## Instructions

### Installation
To download the project to your machine, follow these steps:

1.  Open your terminal in your preferred directory.
2.  Clone the repository:
    ```bash
	git clone <paste_your_ssh_link_here>
	```

### Compilation
The project includes a Makefile. You can compile the library using:
```bash
make
```
This will generate the push_swap and libft.a. The program will show instructions needed to sort the stack.

### How to Use
```bash
make
./push_swap git@github.com:alialemame01-beep/push_swap.git
```
You can insert the input with and without double quotes.

```bash
./push_swap 1 2 3
./push_swap "1 2 3"
./push_swap 1 "2 3"
```

## Resources
1. simple explanation of the algorithm used in the program
[Radix Sort Visually Explained](https://youtube.com/shorts/ZHjCj0Oz6hk?si=5SpLmqBpUOKFckCH)

2. indexing
[what is a database index?](https://youtu.be/Jemuod4wKWo?si=iCpkjPlPGj02fo42)

## License

No license.