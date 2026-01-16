/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:41:02 by aalemami          #+#    #+#             */
/*   Updated: 2026/01/16 17:41:02 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "stack.h"

void	init_stack(t_stack *s)
{
	s->top = -1;
}

bool	is_empty(const t_stack *s)
{
	return (s->top == -1);
}

bool	is_full(const t_stack *s)
{
	return (s->top == MAX - 1);
}
