/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:54:04 by mravera           #+#    #+#             */
/*   Updated: 2022/09/23 01:42:31 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	ps_is_sorted(t_stack *list)
{
	t_node	*tempi;

	tempi = list->top;
	while (tempi != NULL && tempi->prev != NULL)
	{
		if (tempi->pos < tempi->prev->pos)
			tempi = tempi->prev;
		else
			return (0);
	}
	return (1);
}

int	ps_is_digit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

int	ps_atoi(const char *nptr)
{
	int				i;
	int				sign;
	unsigned int	res;

	sign = 1;
	i = 0;
	res = 0;
	while ((9 <= nptr[i] && nptr[i] <= 13) || (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ps_is_digit(nptr[i]))
	{
		res = (res * 10) + (nptr[i++] - 48);
		if (res > 2147483648 || (res == 2147483648 && sign == 1))
			exit(write(2, "Error\n", 6));
	}
	return (sign * res);
}

void	garb_to_quatre(t_stack *lista, t_stack *listb)
{
	ra(lista);
	push_a(lista, listb);
	sa(lista);
	rra(lista);
}
