#include "stack.h"
#include "ft_printf.h"
#include "libft.h"
#include "main_operations.h"
#include "fill_stack.h"
#include "indexing.h"
#include "radix_sort.h"

void	print_stack(Stack *s)
{
	int	i;

	i = s->top;
	while (i >= 0)
	{
		ft_printf("stack[%d]: %d\n", i, s->items[i]);
		i--;
	}
}

void	push_swap(int argc, char **argv)
{
	Stack a;
	Stack b;

	if (argc == 1 || argc > 501)
	{
		if (argc > 501)
			ft_printf("Error\nyou have exceeded the maximum number of arguments.\n");
		return ;
	}
	init_stack(&a);
	init_stack(&b);
	if (!fill_stack_with_arguments(&a, argv))
		return ;
	indexing(&a);
	radix_sort(&a, &b);
	print_stack(&a);
	if (is_sorted(&a))
		printf("success!\n"); // this is for test delete later
}

int main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
