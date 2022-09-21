/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:54:04 by mravera           #+#    #+#             */
/*   Updated: 2022/09/21 18:23:37 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		res = (res * 10) + (nptr[i++] - 48);
	return (sign * res);
}
