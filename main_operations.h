/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_operations.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:04:24 by aalemami          #+#    #+#             */
/*   Updated: 2025/12/22 15:04:24 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_OPERATIONS_H
#define MAIN_OPERATIONS_H

#include "stack.h"

void	swap(Stack *s, char* wrd);

void	push_pop(Stack *s1, Stack *s2, char* wrd);

void	rotate(Stack *s, char* wrd);

void	double_rotate(Stack *s1, Stack *s2);

void	reverse_rotate(Stack *s, char* wrd);

#endif
