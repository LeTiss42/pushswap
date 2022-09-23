/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:20:04 by mravera           #+#    #+#             */
/*   Updated: 2022/09/23 12:31:08 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**freetab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

size_t	nextchar(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	return (i);
}

size_t	nbword(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (ps_strlen(s) == 0)
		return (0);
	if (s[i] != 0 && s[i] != c)
		i++;
	s++;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			i++;
		s++;
	}
	return (i);
}

char	**ps_split(char const *s, char c)
{
	size_t	i;
	char	**res;

	if (!s)
		return (0);
	i = 0;
	res = malloc(sizeof (char *) * (nbword(s, c) + 1));
	if (!res)
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			res[i] = ps_substr(s, 0, nextchar(s, c));
			if (!res[i])
				return (freetab(res));
			s += nextchar(s, c);
			i++;
		}
	}
	res[i] = NULL;
	return (res);
}
