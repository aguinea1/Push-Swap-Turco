/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:57:20 by aguinea           #+#    #+#             */
/*   Updated: 2024/11/28 10:00:23 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac <= 2)
		return (1);
	if ((error_syntax(av) == 1) && (error_dup(av) == 1)
		&& (error_int(av) == 1))
		new_node(&a, av);
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	alg_sort(&a, &b, ac);
	error_free (&a);
	return (0);
}
