/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:28:23 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/11 11:28:23 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

// *	---=[ Printf Macros ]=---
# define ERROR "\e[48;5;160m[ ERROR ]\e[0m \e[38;5;196m\e[4m"
# define B_DEBUG " \e[48;5;202m              [ DEBUGGING ]            \e[0m"
# define T_DEBUG " \e[38;5;202m"
# define GREEN "\033[1;32m"
# define BLUE "\033[38;5;123m"
# define B_INFO "\033[48;5;39m[INFORMATION]\033[0m \033[38;5;123m"
# define NC "\033[0m"
# define BOLD "\e[1m"
# define ITALIC "\e[3m"
# define UNDERLINE "\e[4m"
# define STRIKETHROUGH "\e[9m"
# define RED "\e[31m"

typedef struct s_push_swap
{
	int		i;
	char	**str_arr_inp;
}	t_ps;

// *	---=[ Debugging functions | debugging.c ]=---
void	ft_debug(char *str, char*str2, t_ps	*env);
void	ft_debug_this(char	*str);

// *	---=[ Main | main.c ]=---
int		my_exit(t_ps *env, int failure);
void	ft_error_handler(t_ps *env, char	*error_msg, int failure);

// *	---=[ Input Processing | input_processing.c ]=---
void	input_check(t_ps env, int ac, char **av);

// // *		---=[ Instructions | instructions.c ]=---
// void	print_push_swap_usage_instructions(void);

#endif
