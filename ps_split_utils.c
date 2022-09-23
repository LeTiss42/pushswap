/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_split_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:21:56 by mravera           #+#    #+#             */
/*   Updated: 2022/09/23 12:31:04 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ps_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ps_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	slen = ps_strlen(s);
	while ((start + i) < slen && i < len && s[start + i])
		i++;
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	res[i] = 0;
	slen = 0;
	while (slen < i)
	{
		res[slen] = s[start + slen];
		slen++;
	}
	return (res);
}
