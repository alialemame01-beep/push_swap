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

#include <unistd.h>
#include <stdbool.h>
#include "stack.h"
#include "ft_printf.h"

void	push(t_stack *s, int value)
{
	if (is_full(s))
	{
		write(2, "Error\n", 6);
		return ;
	}
	s->top += 1;
	s->items[s->top] = value;
}

int	pop(t_stack *s)
{
	if (is_empty(s))
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	return (s->items[s->top--]);
}

int	peek(const t_stack *s)
{
	return (s->items[s->top]);
}

bool	is_sorted(const t_stack *s)
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
