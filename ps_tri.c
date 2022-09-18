/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:19:21 by mravera           #+#    #+#             */
/*   Updated: 2022/09/18 20:04:49 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	tri_selectif(t_stack *list_a, t_stack *list_b)
{
	t_node	*tempi;
	int		tempj;

	tempi = list_a->top;
	tempj = list_a->top->pos;
	while (tempi != NULL)
	{
		
	}

} */

int	list_size(t_stack *list)
{
	t_node	*tempi;
	int		i;

	i = 0;
	tempi = list->bot;
	while (tempi != NULL)
	{
		i++;
		tempi = tempi->next;
	}
	return (i);
}
