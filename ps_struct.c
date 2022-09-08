/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:10:37 by mravera           #+#    #+#             */
/*   Updated: 2022/08/22 20:29:02 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*initialisation()
{
	t_stack	*newstack;
	t_node	*newnode;

	newstack = new_stack();
	//newnode = new_node(data);
	if (newnode == NULL || newstack == NULL)
		return (NULL);
	newstack->top = newnode;
	newstack->bot = newnode;
	return (newstack);
}

t_stack	*new_stack(void)
{
	t_stack	*s;

	s = malloc(sizeof(*s));
	if (s == NULL)
		return (NULL);
	s->top = NULL;
	s->bot = NULL;
	return (s);
}

void	new_node(t_stack *list, int data)
{
	t_node	*n;

	n = malloc(sizeof(*n));
	if (n == NULL)
		return;
	if (list->top == NULL)
	{
		n->data = data;
		n->next = NULL;
		n->prev = NULL;
		list->bot = n;
		list->top = n;
	}
	else
	{
		list->top->prev = n;
		n->next = list->top;
		list->top = n;
	}
}

void	display_list(t_stack *list)
{
	t_node	*temp;
	int		i;

	i = 1;
	temp = list->top;
	while (temp->next != NULL)
	{
		printf("%d = [%d\n]", i++, temp->data);
		temp = temp->next;
	}
	printf("%d = [%d\n]", i++, temp->data);
}
