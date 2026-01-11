/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 21:23:37 by aalemami          #+#    #+#             */
/*   Updated: 2026/01/06 21:23:37 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "stack.h"

bool	is_sorted(const Stack *s);
void	bubble_sort(int arr[], int length);
void	indexing(Stack *s);
void	radix_sort(Stack *a, Stack *b);
