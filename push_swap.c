/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:32:25 by mravera           #+#    #+#             */
/*   Updated: 2022/09/22 04:21:52 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	g_nbr = 0;

int	main(int argc, char **argv)
{
	t_stack	*list_a;
	t_stack	*list_b;

	if (argc <= 1)
		return (write(2, "Error\n", 6));
	list_a = new_stack();
	list_b = new_stack();
	parse_multiple_args(list_a, argv);
	set_pos(list_a);
	display_list(list_a, "a");
	display_list(list_b, "b");
	printf("taille de la liste = %d\n", list_size(list_a));
	printf("taille de la liste = %d\n", list_size(list_b));
	tri_triple(list_a);
	//tri_selectif(list_a, list_b);
	display_list(list_a, "a");
	display_list(list_b, "b");
	printf("taille de la liste = %d\n", list_size(list_a));
	printf("taille de la liste = %d\n", list_size(list_b));
	printf("\n*** nbr tot de mouvement = %d ***\n\n", g_nbr);
	return (0);
}
