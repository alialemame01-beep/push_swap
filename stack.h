/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:01:19 by aalemami          #+#    #+#             */
/*   Updated: 2025/12/22 15:01:19 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX 500

typedef struct
{
	int items[MAX];
	int top;
} Stack;

void	init_stack(Stack *s);
bool	is_empty(const Stack *s);
bool	is_full(const Stack *s);
void	push(Stack *s, int value);
int		pop(Stack *s);
int		peek(const Stack *s);
bool	is_sorted(const Stack *s);

#endif