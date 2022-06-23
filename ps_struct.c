/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:10:37 by mravera           #+#    #+#             */
/*   Updated: 2022/06/23 12:12:37 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*initialisation(int data)
{
	t_stack	*newstack;
	t_node	*newnode;

	newstack = malloc(sizeof(*newstack));
	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL || newstack == NULL)
		return (NULL);
	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;
	newstack->sizetot = 1;
	newstack->top = newnode;
	newstack->bot = newnode;
	return (newstack);
}
