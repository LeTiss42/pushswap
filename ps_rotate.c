/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:27:58 by mravera           #+#    #+#             */
/*   Updated: 2022/09/20 01:41:29 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *list_a)
{
	t_node	*tempi;

	if (list_size(list_a) <= 1)
		return ;
	tempi = list_a->top;
	list_a->top = list_a->top->prev;
	list_a->top->next = NULL;
	tempi->next = list_a->bot;
	tempi->prev = NULL;
	list_a->bot->prev = tempi;
	list_a->bot = tempi;
	printf("ra\n");
	g_nbr++;
}
