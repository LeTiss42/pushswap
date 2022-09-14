/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:32:25 by mravera           #+#    #+#             */
/*   Updated: 2022/09/14 19:15:27 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*list_a;
	t_stack	*list_b;

	(void) argc;
	(void) argv;
	list_a = new_stack();
	list_b = new_stack();
	new_topnode(list_a, 12, 0);
	new_topnode(list_a, -3, 0);
	new_topnode(list_a, 10, 0);
	new_topnode(list_a, 110, 0);
	new_topnode(list_a, 3333, 0);
	new_topnode(list_a, -4, 0);
	set_pos(list_a);
	display_list(list_a, "a");
	display_list(list_b, "b");
	push_b(list_a, list_b);
	display_list(list_a, "a");
	display_list(list_b, "b");
	push_b(list_a, list_b);
	display_list(list_a, "a");
	display_list(list_b, "b");
	push_a(list_a, list_b);
	display_list(list_a, "a");
	display_list(list_b, "b");
	push_a(list_a, list_b);
	display_list(list_a, "a");
	display_list(list_b, "b");
	return (0);
}
