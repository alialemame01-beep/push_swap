/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:38:32 by aalemami          #+#    #+#             */
/*   Updated: 2026/01/12 17:38:32 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "ft_printf.h"
#include "fill_stack.h"
#include "indexing.h"
#include "radix_sort.h"

void	push_swap(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return ;
	if (argc > 501)
		return ;
	init_stack(&a);
	init_stack(&b);
	if (!fill_stack_with_arguments(&a, argv))
		return ;
	indexing(&a);
	radix_sort(&a, &b);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
