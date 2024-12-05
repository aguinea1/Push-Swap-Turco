/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_parameters_to_pa.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:41:44 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/02 13:35:13 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	fill_parameters_b(t_stack *a, t_stack *b)
{
	index_median(a);
	index_median(b);
	target_from_b(a, b);
}

void	target_from_b(t_stack *a, t_stack *b)
{
	long	num;
	t_stack	*target;
	t_stack	*temp_a;

	while (b)
	{
		temp_a = a;
		num = LONG_MAX;
		while (temp_a)
		{
			if (temp_a->nbr > b->nbr && temp_a->nbr < num)
			{
				num = temp_a->nbr;
				target = temp_a;
			}
			temp_a = temp_a->next;
		}
		if (num == LONG_MAX)
			b->target = min_nbr(a);
		else
			b->target = target;
		b = b->next;
	}
}

t_stack	*min_nbr(t_stack *a)
{
	t_stack	*min_node;

	min_node = a;
	while (a)
	{
		if (a->nbr < min_node->nbr)
			min_node = a;
		a = a->next;
	}
	return (min_node);
}

t_stack	*get_cheapest(t_stack *stack)
{
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		if (!stack->next)
			break ;
		stack = stack->next;
	}
	return (NULL);
}
