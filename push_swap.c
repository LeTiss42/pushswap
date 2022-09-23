/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:32:25 by mravera           #+#    #+#             */
/*   Updated: 2022/09/23 21:51:47 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*list_a;
	t_stack	*list_b;

	if (argc <= 1)
		return (write(2, "Error\n", 6));
	list_a = new_stack();
	list_b = new_stack();
	parse_multiple_args(list_a, argc, argv);
	set_pos(list_a);
	if (ps_is_sorted(list_a) != 1)
	{
		if (list_size(list_a) == 2 && ps_is_sorted(list_a) == 0)
			sa(list_a);
		if (list_size(list_a) == 3)
			tri_triple(list_a);
		else if (list_size(list_a) > 3 && list_size(list_a) <= 5)
			tri_cinq(list_a, list_b);
		else if (list_size(list_a) > 5)
			tri_selectif(list_a, list_b);
	}
	free_stack(list_a);
	free_stack(list_b);
	return (0);
}

/* void	display_list(t_stack *list, char *a_ou_b)
{
	t_node	*temp;
	int		i;

	printf("__liste %s__\n", a_ou_b);
	if (list->top == NULL)
	{
		printf("***liste vide***\n\n");
		return ;
	}
	i = 1;
	temp = list->top;
	while (temp->prev != NULL)
	{
		printf("%d# [%d] %d\n", i, temp->pos, temp->data);
		i++;
		temp = temp->prev;
	}
	printf("listop = %d\n", list->top->data);
	printf("lisbot = %d\n\n", list->bot->data);
}
 */