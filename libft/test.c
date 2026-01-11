/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 00:09:06 by aalemami          #+#    #+#             */
/*   Updated: 2025/12/25 00:09:06 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *word)
{
	if (word)
	{
		free(word);
		word = NULL;
	}
}

void visualize_list(t_list *head)
{
    t_list *current = head;
    int i = 0;

    printf("\n--- LINKED LIST VISUALIZER ---\n");
    while (current != NULL)
    {
        printf("Node %d Address: %p\n", i, current);
        // Assuming content is a string for this test. 
        // If it's an int, change %s to %d and cast (int *)
        printf("  |-> Content: %s\n", (char *)current->content); 
        printf("  |-> Next:    %p\n", current->next);
        printf("      |\n      v\n");
        
        current = current->next;
        i++;
    }
    printf("     NULL\n------------------------------\n");
}

void	*my_func(void *content_string)
{
	char	*temp;
	char	*new;

	temp = (char *)content_string;
	new = ft_strdup(temp);
	new[0] = 'x';

	return new;
}

int main()
{
	t_list *new_node1 = ft_lstnew(ft_strdup("1234"));
	t_list *new_node2 = ft_lstnew(ft_strdup("0000"));
	t_list *new_node3 = ft_lstnew(ft_strdup("abcd"));
	t_list *new_node4 = ft_lstnew(ft_strdup("qwer"));

	t_list *head = new_node1;
	
	ft_lstadd_front(&head, new_node2);
	ft_lstadd_back(&head, new_node3);

	ft_lstadd_back(&head, new_node4);


	t_list *new_head = ft_lstmap(head, my_func, del);
	
	visualize_list(new_head);

	ft_lstclear(&head, del);

	visualize_list(new_head);

	return (0);
}