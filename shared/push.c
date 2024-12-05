/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:16:22 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 14:50:43 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/include/push_swap.h"
#include "../mandatory/libft/libft.h"

void	push(t_stack **final, t_stack **start)
{
	t_stack	*temps;

	if (*start == NULL)
		return ;
	temps = *start;
	(*start) = (*start)->next;
	if (*start != NULL)
		(*start)->prev = NULL;
	temps->prev = NULL;
	if (*final == NULL)
	{
		*final = temps;
		temps->next = NULL;
	}
	else
	{
		temps->next = *final;
		temps->next->prev = temps;
		*final = temps;
	}
	*final = temps;
}

void	pa(t_stack	**a, t_stack **b, int check)
{
	push(a, b);
	if (check != 1)
		ft_printf("pa\n");
}

void	pb(t_stack	**a, t_stack **b, int check)
{
	push(b, a);
	if (check != 1)
		ft_printf("pb\n");
}
