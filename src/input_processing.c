/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_processing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:42:49 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/15 13:23:04 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    input_error_check(t_env e, int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 1)
		ft_error_handler(&e, "NOT ENOUGH ARGUMENTS", -1);
	if (ac == 2)
	{
		while (av[i])
		{
			if (ft_isdigit(av[i]) == 1 || av[i] == ' ')
			i++;
		}
	}
}