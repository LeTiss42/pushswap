/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:32:25 by mravera           #+#    #+#             */
/*   Updated: 2022/08/22 20:00:04 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*list;

	(void) argc;
	(void) argv;
	list = initialisation(87);
	printf("listop = %d\n", list->top->data);
	printf("lisbot = %d\n", list->bot->data);
	return (0);
}
