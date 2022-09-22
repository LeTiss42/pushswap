/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:27:58 by mravera           #+#    #+#             */
/*   Updated: 2022/09/22 04:26:16 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *list_a)
{
	t_node	*tempi;

	if (list_size(list_a) >= 2)
	{
		tempi = list_a->top;
		list_a->top = list_a->top->prev;
		list_a->top->next = NULL;
		tempi->next = list_a->bot;
		tempi->prev = NULL;
		list_a->bot->prev = tempi;
		list_a->bot = tempi;
	}
	write(1, "ra\n", 3);
	g_nbr++;
}

void	rb(t_stack *list_a)
{
	t_node	*tempi;

	if (list_size(list_a) >= 2)
	{
		tempi = list_a->top;
		list_a->top = list_a->top->prev;
		list_a->top->next = NULL;
		tempi->next = list_a->bot;
		tempi->prev = NULL;
		list_a->bot->prev = tempi;
		list_a->bot = tempi;
	}
	write(1, "rb\n", 3);
	g_nbr++;
}

void	rra(t_stack *list_a)
{
	t_node	*tempi;

	if (list_size(list_a) >= 2)
	{
		tempi = list_a->bot;
		list_a->bot = list_a->bot->next;
		list_a->bot->prev = NULL;
		tempi->prev = list_a->top;
		tempi->next = NULL;
		list_a->top->next = tempi;
		list_a->top = tempi;
	}
	write(1, "rra\n", 4);
	g_nbr++;
}

void	rrb(t_stack *list_a)
{
	t_node	*tempi;

	if (list_size(list_a) >= 2)
	{
		tempi = list_a->bot;
		list_a->bot = list_a->bot->next;
		list_a->bot->prev = NULL;
		tempi->prev = list_a->top;
		tempi->next = NULL;
		list_a->top->next = tempi;
		list_a->top = tempi;
	}
	write(1, "rrb\n", 4);
	g_nbr++;
}
