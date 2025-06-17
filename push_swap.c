/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:24:05 by mklevero          #+#    #+#             */
/*   Updated: 2025/06/17 16:07:15 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a_stack;
	t_node	*b_stack;
	bool	splitted;

	splitted = false;
	a_stack = NULL;
	b_stack = NULL;
	if (ac < 2)
		return (0);
	check_empty_input(av);
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		if (av == NULL)
			error_exit();
		ac = ft_new_ac_count(av);
		splitted = true;
	}
	ft_create_stack(ac, av, &a_stack, splitted);
	check_sort(&a_stack, &b_stack);
	return (0);
}
