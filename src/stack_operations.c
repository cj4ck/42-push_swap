/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:43:26 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 10:36:43 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	tmp = *dst;
	if (*src == 0)
	{
		ft_putstr_fd("Stack SRC is empty, nothing to push\n", 1);
		return ;
	}
	*dst = *src;
	(*src) = (*src)->next;
	(*dst)->next = tmp;
}

void	swap_stack(t_list **stack)
{
	t_list	*tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		ft_putstr_fd("Stack is empty or has too little nodes\n", 1);
		return ;
	}
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	move_node_to_end(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		ft_putstr_fd("Stack is empty or has too little nodes\n", 1);
		return ;
	}
	tmp = *stack;
	last = ft_lstlast(*stack);
	*stack = (*stack)->next;
	last->next = tmp;
	tmp->next = 0;
}

void	move_last_node_to_top(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;
	t_list	*penultimate;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		ft_putstr_fd("Stack is empty or has too little nodes\n", 1);
		return ;
	}
	tmp = *stack;
	last = ft_lstlast(*stack);
	penultimate = ft_lstpenultimate(*stack);
	*stack = last;
	last->next = tmp;
	penultimate->next = 0;
}
