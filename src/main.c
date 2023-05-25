/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:25:43 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/25 13:13:43 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_ps	env;

	ft_memset(&env, 0, sizeof(env));
	input_check(env, ac, av);
	// parser(env, ac, av);
}

//		printf("%s number-> %li%s\n",T_DEBUG, number, NC);

void	ft_error_handler(t_ps *env, char	*error_msg, int failure)
{
	if (failure == -1)
	{
		ft_printf("%s@Input_check %s\n",ERROR, NC);
		ft_printf("%s%s%s\n",ERROR, error_msg, NC);
		ft_printf("%s./push_swap [unique numbers in INT 32bit range]%s\n", \
		B_INFO, NC);
		ft_printf("%s./push_swap 1 2 3 4 5%s\n", B_INFO, NC);
		ft_printf("%sARG=\"4 67 3 87 23\"; ./push_swap $ARG | \
./checker_OS $ARG%s\n", B_INFO, NC);
		exit(EXIT_FAILURE);
	}
	if (!failure)
	{
		ft_printf("%s%s%s\n",ERROR, error_msg, NC);
		exit(EXIT_SUCCESS);	
	}
	if (failure)
	{
		ft_printf("%s%s%s\n",ERROR, error_msg, NC);
		exit(EXIT_FAILURE);
	}
}
