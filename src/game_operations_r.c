/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_operations_r.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:43:26 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 10:36:43 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **A)
{
	move_node_to_end(A);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **B)
{
	move_node_to_end(B);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **A, t_list **B)
{
	move_node_to_end(A);
	move_node_to_end(B);
	ft_putstr_fd("rr\n", 1);
}
