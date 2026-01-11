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
#include "stack.h"
#include "libft.h"
#include "ft_printf.h"
#include "main_operations.h"
#include <stdlib.h>

bool	check_input_characters(const char *word)
{
	int	length;
	int	i;

	length = ft_strlen(word);
	if ((length == 0) || (length == 1 && word[0] == '-'))
		return (false);
	i = 0;
	if (word[0] == '-')
		i++;
	while (i < length)
	{
		if (!ft_isdigit(word[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	check_int_limit(const char *word)
{
	int	length;

	length = ft_strlen(word);
	if (length > 11)
		return (false);
	if (length == 11 && word[0] == '-')
	{
		if (ft_strncmp(word, "-2147483648", 12) > 0)
			return (false);
	}
	else if (length == 10)
	{
		if (ft_strncmp(word, "2147483647", 11) > 0)
			return (false);
	}
	return (true);
}

bool	check_unique_values(const Stack *s, int value)
{
	int	i;

	if (is_empty(s))
		return (true);
	i = 0;
	while (i <= s->top)
	{
		if (s->items[i] == value)
			return (false);
		i++;
	}
	return (true);
}

void	rotate_no_print(Stack *s) // check this
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
	//A B
	//B C
	//C D
	//D A
}

bool	check_check_check_check(Stack *s, char **new, int i, int j)
{
	if (is_full(s))
	{
		ft_printf("Error\nyou have exceeded the maximum number of arguments.\n");
		return (false);
	}
	if (!check_input_characters(new[j]))
	{
		ft_printf("Error\nYou have entered a non integer value(s).\nArgument number [%d]\n", i + j);
		return (false);
	}
	if (!check_int_limit(new[j]))
	{
		ft_printf("Error\nThe argument number [%d] is causing an integer overflow.\n", i + j);
		return (false);
	}
	if (!check_unique_values(s, ft_atoi(new[j])))
	{
		ft_printf("Error\nThe argument number [%d] is a duplicate. \"%d\"\n", i + j, ft_atoi(new[j]));
		return (false);
	}
	return (true);
}

void	free_new(char **new)
{
	int i;

	if (!new)
		return ;
	i = 0;
	while (!new[i])
	{
		free(new[i]);
		i++;
	}
	free(new);
}

bool	fill_stack_with_arguments(Stack *s, char **argv)
{
	char **new;
	int	i;
	int	j;

	i = 1;
	while (!is_full(s) && argv[i])
	{
		j = 0;
		new = ft_split(argv[i], ' ');
		while (new[j])
		{
			if (!check_check_check_check(s, new, i, j))
			{
				free_new(new);
				return (false);
			}	
			push(s, ft_atoi(new[j]));
			rotate_no_print(s);
			j++;
		}
		free_new(new);
		i++;
	}
	return (true);
}
