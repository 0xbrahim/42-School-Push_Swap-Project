/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 07:46:38 by bahmed            #+#    #+#             */
/*   Updated: 2025/05/23 07:46:40 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a)
{
	t_node	*first;
	t_node	*last;

	if (!a || !(*a) || !((*a)->next))
		return ;
	first = *a;
	last = *a;
	while (last->next)
		last = last->next;
	*a = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
}

void	rra(t_node **a)
{
	t_node	*prev;
	t_node	*current;

	if (!a || !(*a) || !((*a)->next))
		return ;
	prev = NULL;
	current = *a;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL;
	current->next = *a;
	*a = current;
	write(1, "rra\n", 4);
}

void	rb(t_node **b)
{
	t_node	*first;
	t_node	*last;

	if (!b || !(*b) || !((*b)->next))
		return ;
	first = *b;
	last = *b;
	while (last->next)
		last = last->next;
	*b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
}

void	rrb(t_node **b)
{
	t_node	*prev;
	t_node	*current;

	if (!b || !(*b) || !((*b)->next))
		return ;
	prev = NULL;
	current = *b;
	while (current->next)
	{
		prev = current;
		current = current->next;
	}
	prev->next = NULL;
	current->next = *b;
	*b = current;
	write(1, "rrb\n", 4);
}
