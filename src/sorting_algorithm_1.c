/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:26:43 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 14:34:31 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_list *lst)
{
	if (lst)
	{		
		while (lst->next)
		{
			if (lst->content > lst->next->content)
				return (0);
			lst = lst->next;
		}
	}
	return (1);
}

static	void	create_part(t_list **A, t_list **B, int min, int max)
{
	int	j;
	int	first_n;
	int	last_n;

	first_n = index_first_node(*A, min, max);
	while (first_n != -1)
	{
		j = 0;
		last_n = index_last_node(*A, min, max);
		if (first_n < ft_lstsize(*A) - last_n)
			while (first_n--)
				ra(A);
		else
			while (j++ < ft_lstsize(*A) - last_n)
				rra(A);
		pb(A, B);
		if ((*B)->content < (min + max) / 2 && ft_lstsize(*B) > 2)
			rb(B);
		last_n = index_last_node(*A, min, max);
		first_n = index_first_node(*A, min, max);
	}
}

static	void	create_parts(t_list **A, t_list **B, int min, int max)
{
	int	i;
	int	parts;
	int	range;

	parts = 10;
	i = 0;
	if (ft_lstsize(*A) > 300)
		parts = 48;
	range = ft_abs(min - max) / parts + ft_abs(min - max) % parts;
	while (i < parts)
	{
		create_part(A, B, min + i * range, min + (i + 1) * range);
		i++;
	}
	while (ft_lstsize(*B) != 0)
		smart_pa(A, B);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int	max;

	min = find_minimum_val(*stack_a);
	max = find_maximum_val(*stack_a);
	if (is_sorted(*stack_a))
		return ;
	if (ft_lstsize(*stack_a) > 50)
		create_parts(stack_a, stack_b, min, max);
	else
	{
		while (!is_sorted(*stack_a) || ft_lstsize(*stack_b) != 0)
		{
			if (ft_lstsize(*stack_a) == 2)
				sa(stack_a);
			else if (ft_lstsize(*stack_a) < 4)
			{
				sort_three_elements(stack_a);
				while (ft_lstsize(*stack_b) > 0)
					pa(stack_a, stack_b);
			}
			else
				smart_pb(stack_a, stack_b, ft_lstsize(*stack_a));
		}
	}
}
