/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:19:21 by mravera           #+#    #+#             */
/*   Updated: 2022/09/23 14:29:21 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tri_selectif(t_stack *list_a, t_stack *list_b)
{
	int		max_nbr;
	int		bit;
	int		maxbit;

	maxbit = 0;
	bit = 0;
	max_nbr = list_size(list_a) - 1;
	while ((max_nbr >> maxbit) != 0)
		maxbit++;
	while (bit < maxbit)
	{
		while (max_nbr-- >= 0)
		{
			if (((list_a->top->pos >> bit) & 1) == 1)
				ra(list_a);
			else
				push_b(list_a, list_b);
		}
		bit++;
		pa_all(list_a, list_b);
		max_nbr = list_size(list_a) - 1;
	}
}

void	tri_triple(t_stack *l)
{
	int	a;
	int	b;
	int	c;

	if (list_size(l) != 3)
		return ;
	while (ps_is_sorted(l) != 1)
	{
		a = l->top->pos;
		b = l->top->prev->pos;
		c = l->bot->pos;
		if ((a < b && a < c && b > c) || (a > b && a < c && b < c)
			|| (a > b && a > c && b > c))
			sa(l);
		else if (a > b && a > c && b < c)
			ra(l);
		else if (a < b && a > c && b > c)
			rra(l);
	}
}

void	tri_cinq(t_stack *lista, t_stack *listb)
{
	while (list_size(lista) > 3)
		push_b(lista, listb);
	tri_triple(lista);
	if (list_size(listb) == 1)
		ps_to_trois(lista, listb);
	else if (list_size(listb) == 2)
	{
		ps_to_trois(lista, listb);
		ps_to_quatre(lista, listb);
	}
}

void	ps_to_trois(t_stack *lista, t_stack *listb)
{
	if (listb->top->pos < lista->top->pos)
		push_a(lista, listb);
	else if (listb->top->pos < lista->top->prev->pos)
	{
		push_a(lista, listb);
		sa(lista);
	}
	else if (listb->top->pos < lista->bot->pos)
	{
		rra(lista);
		push_a(lista, listb);
		ra(lista);
		ra(lista);
	}
	else
	{
		push_a(lista, listb);
		ra(lista);
	}
}

void	ps_to_quatre(t_stack *lista, t_stack *listb)
{
	if (listb->top->pos < lista->top->pos)
		push_a(lista, listb);
	else if (listb->top->pos < lista->top->prev->pos)
	{
		push_a(lista, listb);
		sa(lista);
	}
	else if (listb->top->pos < lista->bot->next->pos)
	{
		garb_to_quatre(lista, listb);
	}
	else if (listb->top->pos < lista->bot->pos)
	{
		rra(lista);
		push_a(lista, listb);
		ra(lista);
		ra(lista);
	}
	else
	{
		push_a(lista, listb);
		ra(lista);
	}
}
