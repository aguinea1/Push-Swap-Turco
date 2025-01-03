/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:45:46 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/03 15:38:02 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    chuncks_num(t_stack *a, int divison, int flag)
{
    t_stack *head;
    int		i;
    int     k;

    i = 0;
    k = 1;
    head = *a;
    while (flag >= i)
    {
        while (head->chunk == 0)
        {
            if (head->index < divison * k && head->index > divison * (k - 1))
                head->chunk = k;
            k++;
        }
        i++;
        head = head->next;
    }
}

t_stack    verify_upper_or_lower(t_stack *a, int chunk, int flag)
{
    t_stack *head;
    t_stack *first;
    t_stack *last;

    head = *a;
    if (flag == 1)
    {
        while (head->index < index / 2)
        {
            if (head->chunk == chunk)
            {
                first = head;
                return (first);
            }
            head = head->next;
        }
    }
    else
    {
        last = ft_lastnode(*a);
        while (last->index < index / 2)
        {
            if (last->chunk == chunk)
            {
                first = last;
                break ;
            }
            last = last->prev;
        }
    }
    return (first);
}

void    chunks_cost(t_stack *upper, t_stack *lower, int len)
{
    if (upper->above_median)
        upper->push_cost = upper->index;
    else
        upper->push_cost = len - (upper->index);
    if (lower->above_median)
        lower->push_cost = lower->index;
    else
        upper->push_cost = len - (upper->index);
    if (upper->push_cost > lower->push_cost)
        return (lower);
    return (upper);
}

int left_chunk(t_stack *a, int chunk)
{
    t_stack *head;

    head = a;
    while (head)
    {
        if (head->chunk == chunk)
            return (0);
        if (head->next)
            head = head->next;
        else
            break ;
    }
    return (0);
}