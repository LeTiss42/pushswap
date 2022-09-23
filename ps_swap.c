/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 02:22:12 by mravera           #+#    #+#             */
/*   Updated: 2022/09/23 20:20:33 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *list)
{
	int	temp[4];

	if (list_size(list) >= 2)
	{
		temp[0] = list->top->data;
		temp[1] = list->top->pos;
		temp[2] = list->top->prev->data;
		temp[3] = list->top->prev->pos;
		supp_topnode(list);
		supp_topnode(list);
		new_topnode(list, temp[0], temp[1]);
		new_topnode(list, temp[2], temp[3]);
	}
	write(1, "sa\n", 3);
}

void	sb(t_stack *list)
{
	int	temp[4];

	if (list_size(list) >= 2)
	{
		temp[0] = list->top->data;
		temp[1] = list->top->pos;
		temp[2] = list->top->prev->data;
		temp[3] = list->top->prev->pos;
		supp_topnode(list);
		supp_topnode(list);
		new_topnode(list, temp[0], temp[1]);
		new_topnode(list, temp[2], temp[3]);
	}
	write(1, "sb\n", 3);
}
