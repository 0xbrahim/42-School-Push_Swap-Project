/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahmed <bahmed@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 07:46:32 by bahmed            #+#    #+#             */
/*   Updated: 2025/05/23 07:46:34 by bahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_three(t_node **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;
	if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first > second)
		sa(a);
	else if (first > third)
		rra(a);
	else if (second > third)
	{
		rra(a);
		sa(a);
	}
}

void	sort_five(t_node **a, t_node **b)
{
	int	min_index;
	int	i;

	i = 0;
	while (i++ < 2)
	{
		min_index = find_min_index(*a);
		if (min_index <= stack_size(*a) / 2)
			while (min_index-- > 0)
				ra(a);
		else
			while (min_index++ < stack_size(*a))
				rra(a);
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}
