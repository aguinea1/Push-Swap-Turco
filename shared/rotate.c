/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:12:29 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 14:51:38 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/include/push_swap.h"
#include "../mandatory/libft/libft.h"

void	rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*post;
	t_stack	*last;

	last = ft_lastnode(*stack);
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	temp = *stack;
	post = temp->next;
	post->prev = NULL;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
	*stack = post;
}

void	ra(t_stack **a, int check)
{
	rotate(a);
	if (check != 1)
		ft_printf("ra\n");
}

void	rb(t_stack **b, int check)
{
	rotate(b);
	if (check != 1)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, int check)
{
	rotate(a);
	rotate(b);
	if (check != 1)
		ft_printf("rr\n");
}
