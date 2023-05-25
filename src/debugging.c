/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugging.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjackows <cjackows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:30:14 by cjackows          #+#    #+#             */
/*   Updated: 2023/05/24 15:21:58 by cjackows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_debug_this(char	*str)
{
	printf("%s%s%s\n",T_DEBUG, str, NC);
}

// void	ft_debug(char	*str, char	*str2, t_ps	*env)
// {
// 	printf("%s %s%s@%s\n%s", P_DEBUG, T_DEBUG,UNDERLINE, str2, NC);
// 	printf("%s--------------------------------------- %s%s\n", T_DEBUG, str, NC);
// 	if(env->mlx)
// 	{
// 		printf("%smlx			|%s ",T_DEBUG,NC);
// 				printf("%p\n", env->mlx);//, NC
// 	}
// }
