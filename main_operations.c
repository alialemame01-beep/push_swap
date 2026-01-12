/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:07:57 by aalemami          #+#    #+#             */
/*   Updated: 2025/12/22 15:07:57 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "main_operations.h"
#include "ft_printf.h"

void	swap(Stack *s, char *wrd)
{
	int temp;

	if (is_empty(s) || s->top == 0)
		return ;
	temp = s->items[s->top];
	s->items[s->top] = s->items[s->top - 1];
	s->items[s->top - 1] = temp;
	ft_printf("%s", wrd);
}

void	push_pop(Stack *s1, Stack *s2, char *wrd)
{
	if (!is_empty(s2))
	{
		s1->top++;
		s1->items[s1->top] = s2->items[s2->top];
		s2->top--;
		ft_printf("%s", wrd);
	}
}

void	rotate(Stack *s, char *wrd)
{
	int	i;
	int	temp;

	if (is_empty(s) || s->top == 0)
		return ;
	i = 0;
	temp = s->items[s->top];
	while (i < s->top)
	{
		s->items[s->top - i] = s->items[s->top - i - 1];
		i++;
	}
	s->items[0] = temp;
	ft_printf("%s", wrd);
	//A B
	//B C
	//C D
	//D A
}

void	double_rotate(Stack *s1, Stack *s2)
{
	rotate(s1, "r");
	rotate(s2, "r\n");
}

void	reverse_rotate(Stack *s, char *wrd)
{
	int	i;
	int	temp;

	if (is_empty(s) || s->top == 0)
		return ;
	i = 0;
	temp = s->items[0];
	while (i < s->top)
	{
		s->items[i] = s->items[i + 1];
		i++;
	}
	s->items[i] = temp;
	ft_printf("%s", wrd);
	//A D
	//B A
	//C B
	//D C
}
