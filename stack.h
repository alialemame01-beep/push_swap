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
# define STACK_H

# include <stdbool.h>

# define MAX 500

typedef struct s
{
	int	items[MAX];
	int	top;
}		t_stack;

void	init_stack(t_stack *s);
bool	is_empty(const t_stack *s);
bool	is_full(const t_stack *s);
void	push(t_stack *s, int value);
int		pop(t_stack *s);
int		peek(const t_stack *s);
bool	is_sorted(const t_stack *s);

#endif