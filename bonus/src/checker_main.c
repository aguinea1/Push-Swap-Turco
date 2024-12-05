/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:57:01 by aguinea           #+#    #+#             */
/*   Updated: 2024/12/05 22:10:07 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

static void	error(t_stack **b, t_stack **a)
{
	error_free(b);
	error_free(a);
	ft_printf("Error\n");
	exit (1);
}

static bool	ft_strcmp(char	*s1, char *output)
{
	int	i;

	i = -1;
	while (s1[++i] != '\0' && output[i] != '\0')
	{
		if (s1[i] - output[i] != 0)
			return (false);
	}
	return (true);
}

static void	check_output(t_stack **a, t_stack **b, char *mov)
{
	if (ft_strcmp("pb\n", mov))
		pb(a, b, 1);
	else if (ft_strcmp("pa\n", mov))
		pa(a, b, 1);
	else if (ft_strcmp("ra\n", mov))
		ra(a, 1);
	else if (ft_strcmp("rb\n", mov))
		rb(b, 1);
	else if (ft_strcmp("rr\n", mov))
		rr(a, b, 1);
	else if (ft_strcmp("rrr\n", mov))
		rrr(a, b, 1);
	else if (ft_strcmp("rra\n", mov))
		rra(a, 1);
	else if (ft_strcmp("rrb\n", mov))
		rrb(b, 1);
	else if (ft_strcmp("sa\n", mov))
		sa(a, 1);
	else if (ft_strcmp("sb\n", mov))
		sb(b, 1);
	else
		error(b, a);
	return ;
}

int	main(int ac, char **av)
{
	char	*mov;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac <= 2)
		return (1);
	if ((error_syntax(av) == 1) && (error_dup(av) == 1) && (error_int(av) == 1))
		new_node(&a, av);
	else
		return (ft_printf("Error\n"), 0);
	mov = get_next_line(STDIN_FILENO);
	while (mov)
	{
		check_output(&a, &b, mov);
		free (mov);
		mov = get_next_line(STDIN_FILENO);
	}
	if (is_sorted(a) && !b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (error_free(&a), 0);
}
