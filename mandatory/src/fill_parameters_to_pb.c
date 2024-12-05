/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_parameters_to_pb.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:42:09 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/02 13:40:49 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	index_median(t_stack *stack)
{
	int	len_stack;
	int	i;

	len_stack = ft_stacksize(stack);
	i = 0;
	while (stack)
	{
		stack->index = i;
		if (i > len_stack / 2)
			stack->above_median = false;
		else
			stack->above_median = true;
		stack = stack->next;
		i++;
	}
}

void	target_from_a(t_stack *a, t_stack *b)
{
	long	num;
	t_stack	*target;
	t_stack	*temp_b;

	while (a)
	{
		temp_b = b;
		num = LONG_MIN;
		while (temp_b)
		{
			if (temp_b->nbr < a->nbr && temp_b->nbr > num)
			{
				num = temp_b->nbr;
				target = temp_b;
			}
			temp_b = temp_b->next;
		}
		if (num == LONG_MIN)
			a->target = max_nbr(b);
		else
			a->target = target;
		a = a->next;
	}
}

t_stack	*max_nbr(t_stack *b)
{
	t_stack	*max_node;

	max_node = b;
	while (b)
	{
		if (b->nbr > max_node->nbr)
			max_node = b;
		b = b->next;
	}
	return (max_node);
}

void	cost_analysis(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_stacksize(a);
	len_b = ft_stacksize(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = len_a - (a->index);
		if (a->target->above_median)
			a->push_cost += a->target->index;
		else
			a->push_cost += len_b - (a->target->index);
		a = a->next;
	}
}

void	ft_cheapest_movement(t_stack *a)
{
	t_stack	*cheapest_node;
	t_stack	*temp_a;

	temp_a = a->next;
	cheapest_node = a;
	while (temp_a)
	{
		if (temp_a->push_cost < cheapest_node->push_cost)
			cheapest_node = temp_a;
		temp_a = temp_a->next;
	}
	cheapest_node->cheapest = true;
}
