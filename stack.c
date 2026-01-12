/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 13:07:55 by aalemami          #+#    #+#             */
/*   Updated: 2025/12/22 13:07:55 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "stack.h"
#include "ft_printf.h"

void init_stack(Stack *s)
{
	s->top = -1;
}

bool is_empty(const Stack *s)
{
	return (s->top == -1);
}

bool is_full(const Stack *s)
{
	return (s->top == MAX - 1);
}

void push(Stack *s, int value)
{
	if(is_full(s))
	{
		ft_printf("Error\n");
		return ;
	}
	s->top += 1;
	s->items[s->top] = value;
}

int pop(Stack *s)
{
	if(is_empty(s))
	{
		ft_printf("Error\n");
		return -1;
	}
	return (s->items[s->top--]);
}

int peek(const Stack *s)
{
	return (s->items[s->top]);
}

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
