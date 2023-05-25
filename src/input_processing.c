/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_processing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:42:49 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/24 15:41:59 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Function checks if passed arguments are in form of digits
 */
static void	passed_arguments_isdigit_values_check(t_ps env, int ac, char **av)
{
	int	i;
	int	l;

	i = 1;
	l = 0;
	while (i < ac)
	{
		while (av[i][l])
		{
			if (!ft_isdigit(av[i][l]))
				ft_error_handler(&env, "ARGUMENTS OTHER THAN DIGITS PASSED", -1);
			l++;
		}
		l = 0;
		i++;
	}
}

/**
 * @brief Function checks if passed digits are in range of INT (32bit)
 */
static void	passed_arguments_int_range_check(t_ps env, int ac, char	**av)
{
	long	number;
	int		i;
	int		l;

	i = 1;
	l = 0;
	while (i < ac)
	{
		number = ft_atol(av[i]);
		if (number < -2147483648 || number > 2147483647)
			ft_error_handler(&env, "NUMBER OUT OF THE INT RANGE", -1);
		l = 0;
		i++;
	}
}

/**
 * @brief Function checks if there are any same arguments passed
 */
static void	passed_arguments_doubles_check(t_ps env, int ac, char **av)
{
	long	number;
	int		i;
	int		l;

	i = 1;
	while (i < ac)
	{
		number = ft_atol(av[i]);
		l = i;
		while (++l < ac)
		{
			if (number == ft_atol(av[l]))
				ft_error_handler(&env, "PASSED ARGUMENTS ARE THE SAME", -1);
		}
		i++;
	}
}

/**
 * @brief Function checks the input
 */
void	input_check(t_ps env, int ac, char **av)
{
	if (ac <= 2)
	{
		ft_error_handler(&env, "NOT ENOUGH ARGUMENTS PASSED", -1);
		
	}
	else
	{
		passed_arguments_isdigit_values_check(env, ac, av);
		passed_arguments_int_range_check(env, ac, av);
		passed_arguments_doubles_check(env, ac, av);
	}
}
