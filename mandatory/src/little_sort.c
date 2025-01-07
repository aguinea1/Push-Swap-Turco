/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:46:08 by aguinea           #+#    #+#             */
/*   Updated: 2025/01/07 12:23:31 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	alg_sort(t_stack **a, t_stack **b, int ac)
{
	if (ac == 3)
	{
		sort_two(a);
		return ;
	}
	if (ac == 4)
	{
		sort_three(a);
		return ;
	}
	b = ft_calloc(sizeof(t_stack *), 1);
	if (!b)
	{
		error_free(a);
		exit(1);
	}
	else
		alg_resolve(a, b);
	print(*b);
	free(b);
	return ;
}

void	sort_two(t_stack **a)
{
	t_stack	*stack;

	stack = *a;
	if (is_sorted(*a))
		return ;
	else
	{
		sa(a, 35);
		return ;
	}
}

void	sort_three(t_stack **stack)
{
	t_stack	*biggest;
	t_stack	*last;
	t_stack	*temp;

	temp = *stack;
	biggest = biggest_node(stack);
	last = ft_lastnode(*stack);
	if (is_sorted(*stack))
		return ;
	if (temp->nbr == biggest->nbr)
		ra(stack, 2);
	else if ((*stack)->next->nbr == biggest->nbr)
		rra(stack, 2);
	if ((*stack)->nbr > (*stack)->next->nbr)
		sa(stack, 2);
}
