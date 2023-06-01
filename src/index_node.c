/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:56:26 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 10:53:38 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_first_node(t_list *stack, int range_start, int range_end)
{
	int	i;

	i = 0;
	while (stack && (stack->content < range_start
			|| stack->content > range_end))
	{
		stack = stack->next;
		i++;
	}
	if (!stack)
		return (-1);
	return (i);
}

int	index_last_node(t_list *stack, int range_start, int range_end)
{
	int	i;
	int	last;

	i = 0;
	while (stack)
	{
		if (stack->content >= range_start && stack->content <= range_end)
			last = i;
		stack = stack->next;
		i++;
	}
	return (last);
}
