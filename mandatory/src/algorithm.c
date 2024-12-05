/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:45:46 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/03 15:38:02 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	fill_parameters_a(t_stack *a, t_stack *b)
{
	index_median(a);
	index_median(b);
	target_from_a(a, b);
	cost_analysis(a, b);
	ft_cheapest_movement(a);
}

void	alg_resolve(t_stack **a, t_stack **b)
{
	int	len_a;

	len_a = ft_stacksize(*a);
	if (!is_sorted(*a) && len_a--)
		pb(a, b, 33);
	if (!is_sorted(*a) && len_a-- > 3)
		pb(a, b, 36);
	while (len_a-- > 3 && !is_sorted(*a))
	{
		fill_parameters_a(*a, *b);
		push_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		fill_parameters_b(*a, *b);
		push_to_a(a, b);
	}
	index_median(*a);
	min_top(a);
}

void	push_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (!cheapest_node->above_median && !cheapest_node->target->above_median)
		reverse_while(a, b, cheapest_node);
	else if (cheapest_node->above_median && cheapest_node->target->above_median)
		rotate_while(a, b, cheapest_node);
	def_push(a, cheapest_node, 1);
	def_push(b, cheapest_node->target, 33);
	pb(a, b, 2);
}

void	push_to_a(t_stack **a, t_stack **b)
{
	def_push(a, (*b)->target, 1);
	pa(a, b, 2);
}

void	min_top(t_stack **a)
{
	if (is_sorted(*a))
		return ;
	while ((*a)->nbr != min_nbr(*a)->nbr)
	{
		if (min_nbr(*a)->above_median)
			ra(a, 2);
		else
			rra(a, 2);
	}
}
