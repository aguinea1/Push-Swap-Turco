/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_to_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:05:57 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 19:56:14 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	reverse_while(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*a != cheapest_node && *b != cheapest_node->target)
		rrr(a, b, 35);
	index_median(*a);
	index_median(*b);
}

void	rotate_while(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*a != cheapest_node && *b != cheapest_node->target)
		rr(a, b, 15);
	index_median(*a);
	index_median(*b);
}

void	def_push(t_stack **stack, t_stack *cheapest_node, int flag)
{
	while (*stack != cheapest_node)
	{
		if (flag == 1)
		{
			if (cheapest_node->above_median)
				ra(stack, 14);
			else
				rra(stack, 90);
		}
		else if (flag == 33)
		{
			if (cheapest_node->above_median)
				rb(stack, 93);
			else
				rrb(stack, 35);
		}
	}
}
