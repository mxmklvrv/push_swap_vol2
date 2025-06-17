/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_op_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklevero <mklevero@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:13:12 by mklevero          #+#    #+#             */
/*   Updated: 2025/06/17 16:15:30 by mklevero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_big_num(t_node *stack)
{
	t_node	*big;

	if (!stack)
		return (NULL);
	big = stack;
	while (stack)
	{
		if (stack->num > big->num)
			big = stack;
		stack = stack->next;
	}
	return (big);
}

t_node	*find_small_num(t_node *stack)
{
	t_node	*small;

	if (!stack)
		return (NULL);
	small = stack;
	while (stack)
	{
		if (stack->num < small->num)
			small = stack;
		stack = stack->next;
	}
	return (small);
}

t_node	*find_cheapest(t_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
