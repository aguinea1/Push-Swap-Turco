/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:37:01 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 15:34:08 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/include/push_swap.h"
#include "../mandatory/libft/libft.h"

t_stack	*ft_lastnode(t_stack *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

long	ft_atol(const char *nptr)
{
	int		sign;
	int		result;
	long	i;

	i = 0;
	result = 0;
	sign = 1;
	while (*nptr == 32 || (8 < *nptr && *nptr < 14))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		i++;
		if (*nptr == '-')
			sign = -1;
		nptr++;
		if (i >= 2)
			return (0);
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 +(*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

int	ft_stacksize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_stack	*biggest_node(t_stack	**stack)
{
	t_stack	*temp;
	t_stack	*result;

	temp = *stack;
	result = temp;
	if (*stack == NULL)
		return (NULL);
	while (temp)
	{
		if (temp->nbr > result->nbr)
			result = temp;
		temp = temp->next;
	}
	return (result);
}

int	is_sorted(t_stack *stack)
{
	t_stack	*current;

	if (!stack)
		return (1);
	current = stack;
	while (current->next)
	{
		if (current->nbr > current->next->nbr)
			return (0);
		current = current->next;
	}
	return (1);
}
