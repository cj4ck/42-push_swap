/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algorithm_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:26:43 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 14:36:38 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_elements(t_list **A)
{
	t_list	*tmp;

	tmp = *A;
	if (tmp->next->next->content > tmp->next->content
		&& tmp->next->next->content > tmp->content)
		sa(A);
	else if (tmp->next->content > tmp->next->next->content
		&& tmp->next->content > tmp->content)
	{
		if (tmp->content > tmp->next->next->content)
			rra(A);
		else
		{
			sa(A);
			ra(A);
		}
	}
	else if (tmp->next->content > tmp->next->next->content)
	{
		sa(A);
		rra(A);
	}
	else
		ra(A);
}

void	smart_pb(t_list **A, t_list **B, size_t n)
{
	size_t	index;
	size_t	i;

	i = 0;
	index = find_minimum_index(*A, n);
	if (index < n / 2)
	{
		while (i++ < index)
			ra(A);
	}
	else
	{
		while (i++ < n - index)
			rra(A);
	}
	pb(A, B);
}

void	smart_pa(t_list **A, t_list **B)
{
	int	index;
	int	val;

	index = find_maximum_index(*B);
	val = find_maximum_val(*B);
	if (index < (ft_lstsize(*B) / 2))
	{
		while ((*B)->content != val)
			rb(B);
	}
	else
	{
		while ((*B)->content != val)
			rrb(B);
	}
	pa(A, B);
}
