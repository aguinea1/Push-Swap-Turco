/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:13:26 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/02 13:45:26 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../include/push_swap.h"
#include "../libft/libft.h"

void	print(t_stack *node)
{
	int	i;

	i = 0;
	while (node != NULL)
	{
		printf("%i node;\n", i);
		printf(" num = %li\n", node->nbr);
		printf(" index = %i\n", node->index);
		printf(" prev = %p\n", node->prev);
		printf(" next =  %p\n", node->next);
		printf(" target node = %p\n", node->target);
		printf(" push cost = %i\n", node->push_cost);
		node = node->next;
		i++;
	}
}
