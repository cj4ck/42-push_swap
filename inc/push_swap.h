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
# define P_DEBUG " \e[48;5;202m              [ DEBUGGING ]            \e[0m"
# define T_DEBUG " \e[38;5;202m"
# define GREEN "\033[1;32m"
# define NC "\033[0m"
# define BOLD "\e[1m"
# define ITALIC "\e[3m"
# define UNDERLINE "\e[4m"
# define STRIKETHROUGH "\e[9m"
# define RED "\e[31m"

typedef struct s_e
{
	int		i;
}	t_env;

// *	---=[ Debugging functions | debugging.c ]=---
void	ft_debug(char *str, char*str2, t_env	*env);
void	ft_debug_this(char	*str);

// *	---=[ Main | main.c ]=---
int		my_exit(t_env *e, int failure);
void	ft_error_handler(t_env *e, char	*error_msg, int failure);

// *	---=[ Input Processing | input_processing.c ]=---
void    input_error_check(t_env e, int ac, char **av);

#endif