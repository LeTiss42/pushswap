/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:58:23 by mravera           #+#    #+#             */
/*   Updated: 2022/09/22 01:19:46 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_multiple_args(char **argv)
{
	int	i;
	int	j;
	int	x;

	i = 1;
	j = 0;
	while (argv[i])
	{
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (argv[i][j] == '\0')
			exit(write(2, "Error\n", 6));
		while (argv[i][j])
			if (!ps_is_digit(argv[i][j++]))
				exit(write(2, "Error\n", 6));
		x = i - 1;
		while (x >= 1)
			if (ps_atoi(argv[i]) == ps_atoi(argv[x--]))
				exit(write(2, "Error\n", 6));
		j = 0;
		i++;
	}
	return (1);
}

void	parse_multiple_args(t_stack *list_a, char **argv)
{
	int	i;

	(void)list_a;
	i = 0;
	check_multiple_args(argv);
	while (argv[i])
		i++;
	if (--i >= 1)
		while (i > 0)
			new_topnode(list_a, ps_atoi(argv[i--]), 0);
}
