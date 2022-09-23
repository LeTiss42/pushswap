/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:10:37 by mravera           #+#    #+#             */
/*   Updated: 2022/09/23 14:41:25 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(void)
{
	t_stack	*newstack;

	newstack = malloc(sizeof(*newstack));
	if (newstack == NULL)
		return (NULL);
	newstack->top = NULL;
	newstack->bot = NULL;
	return (newstack);
}

void	new_topnode(t_stack *list, int data, int pos)
{
	t_node	*newnode;

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return ;
	if (list->top == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		list->bot = newnode;
		list->top = newnode;
	}
	else
	{
		list->top->next = newnode;
		newnode->prev = list->top;
		list->top = newnode;
	}
		list->top->data = data;
		list->top->pos = pos;
}

void	supp_topnode(t_stack *list)
{
	t_node	*temp;

	if (list->top == NULL)
		return ;
	if (list->top->prev == NULL)
	{
		temp = list->top;
		list->top = NULL;
		list->bot = NULL;
	}
	else
	{
		temp = list->top;
		list->top = list->top->prev;
		list->top->next = NULL;
	}
	free (temp);
	return ;
}

void	set_pos(t_stack *list)
{
	t_node	*temp1;
	t_node	*temp2;
	int		i;

	i = 0;
	temp1 = list->bot;
	temp2 = list->bot;
	while (temp1 != NULL)
	{
		while (temp2 != NULL)
		{
			if (temp1->data > temp2->data)
				i++;
			temp2 = temp2->next;
		}
	temp1->pos = i;
	i = 0;
	temp1 = temp1->next;
	temp2 = list->bot;
	}
}

void	free_stack(t_stack *list)
{
	while (list_size(list) > 0)
		supp_topnode(list);
	free(list);
}
