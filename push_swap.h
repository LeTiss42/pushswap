/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 10:12:09 by mravera           #+#    #+#             */
/*   Updated: 2022/09/20 15:38:54 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				data;
	int				pos;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	struct s_node	*top;
	struct s_node	*bot;
}	t_stack;

//a supprimer
extern int	g_nbr;

//tri
void	tri_selectif(t_stack *list_a, t_stack *list_b);
int		list_size(t_stack *list);

//struct
t_stack	*new_stack(void);
void	new_topnode(t_stack *list, int data, int pos);
void	supp_topnode(t_stack *list);
void	display_list(t_stack *list, char *a_ou_b);
void	set_pos(t_stack *list);

//push
void	push_a(t_stack *list_a, t_stack *list_b);
void	push_b(t_stack *list_a, t_stack *list_b);
void	pa_all(t_stack *list_a, t_stack *list_b);

//rotate
void	ra(t_stack *list_a);

#endif