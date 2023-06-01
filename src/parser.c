/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:53:48 by cjackows          #+#    #+#             */
/*   Updated: 2023/06/01 14:02:41 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	isnumber(char *s)
{
	int	j;

	j = 0;
	while (s[j])
	{
		if (!ft_isdigit(s[j]) && s[j] != '-' && s[j] != '+')
			return (0);
		j++;
	}
	return (1);
}

static	void	free_input(char **input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		free(input[i]);
		i++;
	}
	free(input);
}

static	int	parse_num(int *res, char *input, int j)
{
	long	num;

	if (!isnumber(input))
	{
		free(res);
		return (0);
	}
	num = ft_atol(input);
	if (num > INT_MAX || num < INT_MIN)
	{
		free(res);
		return (0);
	}
	res[j] = (int)num;
	return (1);
}

int	*parser(int ac, char **av)
{
	int		i;
	int		j;
	int		*res;
	char	**input;

	i = 0;
	if (ac == 2)
	{
		j = ft_get_number_of_words(av[1], ' ') + 1;
		input = ft_split(av[1], ' ');
	}
	else
	{
		j = (ac - 1);
		input = av;
		i = 1;
	}
	res = (int *)malloc(sizeof(int) * j);
	j = 0;
	while (input[i])
		if (!parse_num(res, input[i++], j++))
			return (0);
	if (ac == 2)
		free_input(input);
	return (res);
}
