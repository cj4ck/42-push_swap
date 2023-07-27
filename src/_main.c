/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:47:02 by cjackows          #+#    #+#             */
/*   Updated: 2023/07/27 14:17:17 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static	void	print_stacks(t_list *A, t_list *B)
// {
// 	t_list	*tmp_a;
// 	t_list	*tmp_b;

// 	tmp_a = A;
// 	tmp_b = B;
// 	ft_putstr_fd("__A__     __B__\n", 1);
// 	while (!(tmp_a == 0 && tmp_b == 0))
// 	{
// 		if (tmp_a != 0)
// 		{
// 			ft_putnbr_fd(tmp_a->content, 1);
// 			tmp_a = tmp_a->next;
// 		}
// 		ft_putstr_fd("         ", 1);
// 		if (tmp_b != 0)
// 		{
// 			ft_putnbr_fd(tmp_b->content, 1);
// 			tmp_b = tmp_b->next;
// 		}
// 		ft_putendl_fd("", 1);
// 	}
// }

static void	free_stack(t_list **stack)
{
	t_list	*tmp;
	t_list	*head;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}

static	int	input_check(int ac, char **av)
{
	if (ac == 1)
		return (0);
	if (ac == 2)
		return (ft_get_number_of_words(av[1], ' '));
	else
		return (ac - 1);
}

int	main(int ac, char **av)
{
	t_list	**a;
	t_list	**b;
	int		*tab_of_numbers;
	int		size;

	size = input_check(ac, av);
	tab_of_numbers = parser(ac, av);
	if (tab_of_numbers == 0 || not_unique(tab_of_numbers, size) || ac == 1)
	{
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	a = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));
	*a = 0;
	*b = 0;
	initialize_list(tab_of_numbers, size, a);
	if (size > 1)
		sort_stack(a, b);
	free(tab_of_numbers);
	free_stack(a);
	free_stack(b);
	return (0);
}
