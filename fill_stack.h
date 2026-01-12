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

#ifndef FILL_STACK_H
#define FILL_STACK_H

#include <stdbool.h>
#include "stack.h"

bool	fill_stack_with_arguments(Stack *s, char **argv);

#endif