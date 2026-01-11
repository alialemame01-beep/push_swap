/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:22:31 by aalemami          #+#    #+#             */
/*   Updated: 2026/01/06 19:22:31 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "main_operations.h"
#include <stdbool.h>

bool	is_sorted(const Stack *s)
{
	int	i;

	if (is_empty(s) || s->top == 0)
		return (true);
	i = 0;
	while (i < s->top)
	{
		if (s->items[i] < s->items[i + 1])
			return (false);
		i++;
	}
	return (true);
}

int	find_max(Stack *s)
{
	int	max;
	int i;

	if (is_empty(s))
		return (-1);
	max = -1;
	i = 0;
	while (i <= s->top)
	{
		if (max < s->items[i])
			max = s->items[i];
		i++;
	}
	return (max);
}

int	get_number_of_bits(Stack *s)
{
	int	max;
	int	bit;
	int	i;

	bit = 2;
	i = 1;
	max = find_max(s);
	while (max > bit - 1)
	{
		bit *= 2;
		i++;
	}
	return (i);
}

void	part1(Stack *a, Stack *b, int bit)
{
	int size;
	int i;

	size = a->top;
	i = 0;
	while (i <= size)
	{
		if (((a->items[a->top] >> bit) & 1) == 0)
			push_pop(b, a, "pb\n");
		else
			rotate(a, "ra\n");
		i++;
	}
}

void	part2(Stack *a, Stack *b, int bit, int max_number_digits)
{
	int	size;
	int	i;

	size = b->top;
	i = 0;
	if (bit < max_number_digits - 1)
	{
		while (i <= size)
		{
			if (((b->items[b->top] >> (bit + 1)) & 1) == 0)
				rotate(b, "rb\n");
			else
				push_pop(a, b, "pa\n");
			i++;
		}
	}
	else
		while (!is_empty(b))
			push_pop(a, b, "pa\n");
}
void	radix_sort(Stack *a, Stack *b)
{
	int	max_number_digits;
	int	bit;

	max_number_digits = get_number_of_bits(a);
	bit = 0;
	while (bit < max_number_digits)
	{
		if (is_sorted(a) && is_empty(b))
			return ;
		part1(a, b, bit);
		part2(a, b, bit, max_number_digits);
		bit++;
	}
}


