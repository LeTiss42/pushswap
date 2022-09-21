/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 09:58:23 by mravera           #+#    #+#             */
/*   Updated: 2022/09/21 19:17:42 by mravera          ###   ########.fr       */
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
/* 
int	parse_multiple_args(char **argv)
{

} */