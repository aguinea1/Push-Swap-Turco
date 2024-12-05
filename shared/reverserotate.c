/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:58:03 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 14:51:19 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/include/push_swap.h"
#include "../mandatory/libft/libft.h"

void	reverserotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;
	int		len;

	len = ft_stacksize(*stack);
	last = ft_lastnode(*stack);
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	last->next = temp;
	last->prev->next = NULL;
	last->prev = NULL;
	temp->prev = last;
	*stack = find_first(last);
}

void	rra(t_stack **a, int check)
{
	reverserotate(a);
	if (check != 1)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, int check)
{
	reverserotate(b);
	if (check != 1)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, int check)
{
	reverserotate(a);
	reverserotate(b);
	if (check != 1)
		ft_printf("rrr\n");
}
