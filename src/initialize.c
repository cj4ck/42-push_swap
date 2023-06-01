/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:54:44 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 14:36:34 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_list(int *tab, size_t size, t_list **lst)
{
	size_t	i;
	t_list	*new;

	i = 0;
	while (i < size)
	{
		new = ft_lstnew(tab[i]);
		ft_lstadd_back(lst, new);
		i++;
	}
}
