/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:30:11 by mravera           #+#    #+#             */
/*   Updated: 2022/09/18 19:14:25 by mravera          ###   ########.fr       */
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
	return ;
}
