/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:21:12 by aalemami          #+#    #+#             */
/*   Updated: 2026/01/06 13:21:12 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"
#include "libft.h"
#include "main_operations.h"
#include "input_validation.h"

static void	free_new(char **new_argv)
{
	int i;

	if (!new_argv)
		return ;
	i = 0;
	while (new_argv[i])
	{
		free(new_argv[i]);
		i++;
	}
	free(new_argv);
}

bool	fill_stack_with_arguments(Stack *s, char **argv)
{
	char **new_argv;
	int	i;
	int	j;

	i = 1;
	while (!is_full(s) && argv[i])
	{
		j = 0;
		new_argv = ft_split(argv[i], ' ');
		while (new_argv[j])
		{
			if (!check_check_check_check(s, (const char **)new_argv, j))
			{
				free_new(new_argv);
				new_argv = NULL;
				return (false);
			}	
			push(s, ft_atoi(new_argv[j]));
			rotate(s, "");
			j++;
		}
		free_new(new_argv);
		i++;
	}
	return (true);
}
