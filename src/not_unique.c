/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_unique.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:26:35 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 10:53:29 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	not_unique(int *tab, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
