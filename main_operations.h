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
# define MAIN_OPERATIONS_H

# include "stack.h"

void	swap(t_stack *s, char *wrd);
void	push_pop(t_stack *s1, t_stack *s2, char *wrd);
void	rotate(t_stack *s, char *wrd);
void	double_rotate(t_stack *s1, t_stack *s2);
void	reverse_rotate(t_stack *s, char *wrd);

#endif
