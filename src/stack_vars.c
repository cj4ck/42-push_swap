/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_vars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:35:45 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 10:35:46 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_minimum_index(t_list *lst, size_t n)
{
	size_t	index_min;
	size_t	i;
	int		min;

	index_min = 0;
	i = 0;
	if (lst)
		min = lst->content;
	while (lst && i < n)
	{
		if (lst->content < min)
		{
			index_min = i;
			min = lst->content;
		}
		i++;
		lst = lst->next;
	}
	return (index_min);
}

int	find_maximum_index(t_list *lst)
{
	size_t	index_max;
	size_t	i;
	int		max;

	index_max = 0;
	i = 0;
	if (lst)
		max = lst->content;
	while (lst)
	{
		if (lst->content > max)
		{
			index_max = i;
			max = lst->content;
		}
		i++;
		lst = lst->next;
	}
	return (index_max);
}

int	find_minimum_val(t_list *lst)
{
	int		min;

	if (lst)
		min = lst->content;
	while (lst)
	{
		if (lst->content < min)
		{
			min = lst->content;
		}
		lst = lst->next;
	}
	return (min);
}

int	find_maximum_val(t_list *lst)
{
	int		max;

	if (lst)
		max = lst->content;
	while (lst)
	{
		if (lst->content > max)
		{
			max = lst->content;
		}
		lst = lst->next;
	}
	return (max);
}
