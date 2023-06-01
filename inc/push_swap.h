/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:50:52 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 14:36:38 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

//*     --=[ sorting_algorithm_*.c ]=--
int		*parser(int ac, char **av);
int		not_unique(int *tab, size_t size);
void	initialize_list(int *tab, size_t size, t_list **lst);

//*     --=[ sorting_algorithm_*.c ]=--
void	sort_stack(t_list **A, t_list **B);

void	sort_three_elements(t_list **A);
void	smart_pb(t_list **A, t_list **B, size_t n);
void	smart_pa(t_list **A, t_list **B);

//*     --=[ stack_vars.c ]=--
int		find_minimum_index(t_list *lst, size_t n);
int		find_maximum_index(t_list *lst);
int		find_minimum_val(t_list *lst);
int		find_maximum_val(t_list *lst);

//*		--=[ index_node.c ]=--
int		index_first_node(t_list *stack, int range_start, int range_end);
int		index_last_node(t_list *stack, int range_start, int range_end);

//*     --=[ stack_operations.c ]=--
void	do_push(t_list **src, t_list **dst);
void	swap_stack(t_list **stack);
void	move_node_to_end(t_list **stack);
void	move_last_node_to_top(t_list **stack);

//*     --=[ game_operations_*.c ]=--
void	pa(t_list **A, t_list **B);
void	pb(t_list **A, t_list **B);
void	sa(t_list **A);
void	sb(t_list **A);
void	ss(t_list **A, t_list **B);
void	ra(t_list **A);
void	rb(t_list **B);
void	rr(t_list **A, t_list **B);
void	rra(t_list **A);
void	rrb(t_list **B);
void	rrr(t_list **A, t_list **B);

#endif
