/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:30:45 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 14:49:20 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/include/push_swap.h"
#include "../mandatory/libft/libft.h"

void	append_node(t_stack **a, int n)
{
	t_stack	*new;
	t_stack	*last;

	new = ft_calloc(sizeof(t_stack), 1);
	if (!new)
		error_free(a);
	new->nbr = n;
	new->next = NULL;
	if (!*a)
	{
		*a = new;
		new->prev = NULL;
	}
	else
	{
		last = ft_lastnode(*a);
		last->next = new;
		new->prev = last;
	}
}

void	new_node(t_stack **a, char **av)
{
	int	i;
	int	num;

	i = 1;
	num = 0;
	if (!a)
		a = ft_calloc(sizeof(t_stack *), 1);
	while (av[i])
	{
		num = ft_atol(av[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			write(1, "a\n", 2);
			free(a);
			exit(1);
		}
		append_node(a, num);
		i++;
	}
	return ;
}
