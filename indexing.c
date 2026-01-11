/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 22:28:16 by aalemami          #+#    #+#             */
/*   Updated: 2026/01/10 22:28:16 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	bubble_sort(int arr[], int length)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	i = length - 1;
}

void	indexing(Stack *s)
{
	int	arr[MAX];
	int	i;
	int	j;

	i = 0;
	while (i <= s->top)
	{
		arr[i] = s->items[i];
		i++;
	}
	bubble_sort(arr, s->top + 1);
	i = 0;
	while (i <= s->top)
	{
		j = 0;
		while (j++ <= s->top)
		{
			if (s->items[i] == arr[j - 1])
			{
				s->items[i] = j - 1;
				break ;
			}
		}
		i++;
	}
}