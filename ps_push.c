/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:11 by mravera           #+#    #+#             */
/*   Updated: 2022/09/19 17:54:16 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *list_a, t_stack *list_b)
{
	if (list_b->top == NULL)
	{
		printf("pa\n");
		return ;
	}
	new_topnode(list_a, list_b->top->data, list_b->top->pos);
	supp_topnode(list_b);
	printf("pa\n");
	g_nbr++;
	return ;
}

void	push_b(t_stack *list_a, t_stack *list_b)
{
	if (list_a->top == NULL)
	{
		printf("pb\n");
		return ;
	}
	new_topnode(list_b, list_a->top->data, list_a->top->pos);
	supp_topnode(list_a);
	printf("pb\n");
	g_nbr++;
	return ;
}

void	pa_all(t_stack *list_a, t_stack *list_b)
{
	t_node	*tempi;

	tempi = list_b->top;
	if (tempi == NULL)
		return ;
	while (tempi != NULL)
	{
		tempi = tempi->prev;
		push_a(list_a, list_b);
	}
}
