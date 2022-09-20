/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:32:25 by mravera           #+#    #+#             */
/*   Updated: 2022/09/20 15:35:47 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	g_nbr = 0;

int	main(int argc, char **argv)
{
	t_stack	*list_a;
	t_stack	*list_b;
	int		i;

	i = 0;
	(void) argc;
	(void) argv;
	list_a = new_stack();
	list_b = new_stack();
	while (i < 500)
	{
		new_topnode(list_a, random(), 0);
		i++;
	}
	set_pos(list_a);
	display_list(list_a, "a");
	display_list(list_b, "b");
	printf("taille de la liste = %d\n", list_size(list_a));
	printf("taille de la liste = %d\n", list_size(list_b));
	tri_selectif(list_a, list_b);
	display_list(list_a, "a");
	display_list(list_b, "b");
	printf("taille de la liste = %d\n", list_size(list_a));
	printf("taille de la liste = %d\n", list_size(list_b));
	printf("\n*** nbr tot de mouvement = %d ***\n\n", g_nbr);
	return (0);
}
