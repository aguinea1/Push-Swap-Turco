/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:12:47 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 14:52:04 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/include/push_swap.h"
#include "../mandatory/libft/libft.h"

void	swap(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*head;
	t_stack	*last;
	int		len;

	len = ft_stacksize(*stack);
	last = ft_lastnode(*stack);
	if (!stack || !*stack || len == 1)
		return ;
	head = *stack;
	temp = head->next;
	head->next = temp->next;
	head->prev = temp;
	temp->prev = NULL;
	temp->next = head;
	if (len > 2)
		head->next->prev = head;
	*stack = temp;
}

void	sa(t_stack **a, int check)
{
	swap(a);
	if (check != 1)
		ft_printf("sa\n");
}

void	sb(t_stack **b, int check)
{
	swap(b);
	if (check != 1)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, int check)
{
	swap(a);
	swap(b);
	if (check != 1)
		ft_printf("ss\n");
}
