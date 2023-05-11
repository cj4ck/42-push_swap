/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:25:43 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/11 12:56:49 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_env e;

	ft_memset(&e, 0, sizeof(e));
	input_error_check(&e, ac, av);
	// parser(e, ac, av);
	return (0);
}

void	ft_error_handler(t_env *e, char	*error_msg, int failure)
{
	
}