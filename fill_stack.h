/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:11:32 by aalemami          #+#    #+#             */
/*   Updated: 2026/01/06 14:11:32 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "stack.h"

bool	check_unique_values(const Stack *s, int value);
bool	check_int_limit(char *word);
void	rotate_no_print(Stack *s);
bool	fill_stack_with_arguments(Stack *s, char **argv);