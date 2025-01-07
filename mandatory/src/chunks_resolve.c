/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_resolve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:45:46 by aguinea           #+#    #+#             */
/*   Updated: 2025/01/07 13:29:51 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void    spec_resolve(t_stack **a, t_stack **b)
{
    int stack_len;

    stack_len = ft_stacksize(*a);
    if (stack_len == 100)
        resolve100(*a, *b);
   // else
        //resolve500(*a, *b);
}

void    resolve100(t_stack *a, t_stack *b)
{
    t_stack *upper;
    t_stack *lower;
    int chunk;

    chunk = 1;
    chuncks_num(a, 20, 5);
	smallest_nbr(a);
    while(a)
    {
        index_median(a);
        upper = verify_upper_or_lower(a, chunk, 1);
        lower = verify_upper_or_lower(a, chunk, 0);
        lower = chunks_cost(upper, lower, 100);
        def_push(&a, lower, 1);
		if (b)
			order_stack_b(&a, &b, lower);
        pb(&a, &b, 33);
        if (left_chunk(a, chunk) == 1)
            chunk++;
    }
}

void	order_stack_b(t_stack **a, t_stack **b, t_stack *lower)
{
	t_stack *head_a;
	t_stack *head_b;

	head_b = *b;
	head_a = *a;
	while (lower->nbr < head_b->nbr)
	{
		rrb(b, 32);
		head_b = head_b->next;
	}
}

void	smallest_nbr(t_stack *a)
{
	t_stack *head;
	t_stack *temp;
	t_stack	*node;
	int		i;

	i = 1;
	head = a;
	temp = head->next;
	while (temp)
	{
		if (head->nbr > temp->nbr)
			node = temp;
		head = head->next;
		temp = temp->next;
	}
	node->order = i;
	order_nums(a, 1, ft_stacksize(a), node);
}

void	order_nums(t_stack *a, int i, int size, t_stack *node)
{
	t_stack	*head;
	t_stack	*temp;

	while (size >= i)
	{
		head = a;
		temp = head->next;
		while (temp)
		{
			if (head->nbr > temp->nbr)
			{
				if (node->nbr < temp->nbr)
					node = temp;
				head = head->next;
				temp = temp->next;
			}
		}
		i++;
		node->order = i;
	}
}

			


