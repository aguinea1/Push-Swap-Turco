/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_resolve.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:45:46 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/03 15:38:02 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    spec_resolve(t_stack **a, t_stack **b)
{
    int stack_len;

    stack_len = ft_stacksize(*a);
    if (stack_len == 100)
        resolve100(*a, *b);
    else
        resolve500(*a, *b);
}

void    resolve100(t_stack *a, t_stack *b)
{
    t_stack *upper;
    t_stack *lower;
    int chunk;

    chunk = 1;
    chunks_num(a, 100/5, 5);
    while(a)
    {
        index_median(*a);
        upper = verify_upper_or_lower(a, chunk, 1);
        lower = verify_upper_or_lower(a, chunk, 0);
        lower = chunks_cost(upper, lower, 100);
        def_push(&a, lower, 1);
        pb(&a, &b);
        if (b->next)
        {
            if (b->nbr < b->next->nbr)
                sb(&b);
        }
        if (left_chunk(a, chunk) == 1)
            chunk++;

    }
}