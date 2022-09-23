/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:58:23 by mravera           #+#    #+#             */
/*   Updated: 2022/09/23 18:34:32 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_argv_args(char **argv)
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

int	check_args(char **argv)
{
	int	i;
	int	j;
	int	x;

	i = 0;
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
		if (i >= 1)
			while (x >= 0)
				if (ps_atoi(argv[i]) == ps_atoi(argv[x--]))
					exit(write(2, "Error\n", 6));
		i++;
		j = 0;
	}
	return (1);
}

void	parse_multiple_args(t_stack *list_a, int argc, char **argv)
{
	int		i;
	char	**tab;

	i = 0;
	if (argc > 2)
	{
		check_argv_args(argv);
		while (argv[i])
			i++;
		if (--i >= 1)
			while (i > 0)
				new_topnode(list_a, ps_atoi(argv[i--]), 0);
	}
	else if (argc == 2)
	{
		tab = ps_split(argv[1], ' ');
		check_args(tab);
		while (tab[i])
			i++;
		while (--i >= 0)
			new_topnode(list_a, ps_atoi(tab[i]), 0);
		free(tab);
	}
}
