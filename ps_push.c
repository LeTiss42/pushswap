/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:11 by mravera           #+#    #+#             */
/*   Updated: 2022/09/20 15:19:33 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *list_a, t_stack *list_b)
{
	if (list_b->top == NULL)
	{
		write(1, "pa\n", 3);
		return ;
	}
	new_topnode(list_a, list_b->top->data, list_b->top->pos);
	supp_topnode(list_b);
	write(1, "pa\n", 3);
	g_nbr++;
	return ;
}

void	push_b(t_stack *list_a, t_stack *list_b)
{
	if (list_a->top == NULL)
	{
		write(1, "pb\n", 3);
		return ;
	}
	new_topnode(list_b, list_a->top->data, list_a->top->pos);
	supp_topnode(list_a);
	write(1, "pb\n", 3);
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
