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

#include <stdio.h>
#include "stack.h"

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
		printf("Error\nStack overflow, can't push.\n");
		return ;
	}
	s->top += 1;
	s->items[s->top] = value;
}

int pop(Stack *s)
{
	if(is_empty(s))
	{
		printf("Error\nstack underflow, nothing to pop.\n");
		return -1;
	}
	return (s->items[s->top--]);
}

int peek(Stack *s)
{
	if (is_empty(s))
		printf("stack is empty\n");
	return (s->items[s->top]);
}
