/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:19:21 by mravera           #+#    #+#             */
/*   Updated: 2022/09/22 04:18:05 by mravera          ###   ########.fr       */
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

void	tri_triple(t_stack *list)
{
	if (list_size(list) != 3)
		return ;
	if (list->top->pos == 0 && list->bot->pos == 1)
	{
		sa(list);
		ra(list);
	}
	if (list->top->pos == 1 && list->bot->pos == 2)
		sa(list);
	if (list->top->pos == 1 && list->bot->pos == 0)
		rra(list);
	if (list->top->pos == 2 && list->bot->pos == 0)
	{
		sa(list);
		rra(list);
	}
	if (list->top->pos == 2 && list->bot->pos == 1)
		ra(list);
}
