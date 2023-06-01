/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:26:43 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 14:33:29 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_elements(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (tmp->next->next->content > tmp->next->content
		&& tmp->next->next->content > tmp->content)
		sa(stack_a);
	else if (tmp->next->content > tmp->next->next->content
		&& tmp->next->content > tmp->content)
	{
		if (tmp->content > tmp->next->next->content)
			rra(stack_a);
		else
		{
			sa(stack_a);
			ra(stack_a);
		}
	}
	else if (tmp->next->content > tmp->next->next->content)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else
		ra(stack_a);
}

void	smart_pb(t_list **stack_a, t_list **stack_b, size_t n)
{
	size_t	index;
	size_t	i;

	i = 0;
	index = find_minimum_index(*stack_a, n);
	if (index < n / 2)
	{
		while (i++ < index)
			ra(stack_a);
	}
	else
	{
		while (i++ < n - index)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
}

void	smart_pa(t_list **stack_a, t_list **stack_b)
{
	int	index;
	int	val;

	index = find_maximum_index(*stack_b);
	val = find_maximum_val(*stack_b);
	if (index < (ft_lstsize(*stack_b) / 2))
	{
		while ((*stack_b)->content != val)
			rb(stack_b);
	}
	else
	{
		while ((*stack_b)->content != val)
			rrb(stack_b);
	}
	pa(stack_a, stack_b);
}
