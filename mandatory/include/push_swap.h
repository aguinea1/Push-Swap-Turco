/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:53:01 by aguinea           #+#    #+#             */
/*   Updated: 2025/01/10 17:23:25 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				order;
	long			nbr;
	int				chunk;
	bool			above_median;
	bool			cheapest;
	bool			above;
	int				index;
	int				push_cost;
	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*target;
}	t_stack;

int		main(int ac, char **av);
int		error_int(char **av);
int		error_dup(char **arr);
int		error_syntax(char	**arr);
void	new_node(t_stack **a, char **av);
void	append_node(t_stack **a, int n);
void	error_free(t_stack **a);
t_stack	*ft_lastnode(t_stack *lst);
long	ft_atol(const char *nptr);
void	print(t_stack *node);
void	swap(t_stack **stack);
void	sa(t_stack **b, int check);
void	sb(t_stack **b, int check);
void	ss(t_stack **a, t_stack **b, int check);
void	push(t_stack **a, t_stack **b);
void	pa(t_stack	**a, t_stack **b, int check);
void	pb(t_stack	**a, t_stack **b, int check);
void	rotate(t_stack **stack);
void	ra(t_stack **a, int check);
void	rb(t_stack **b, int check);
void	rr(t_stack **a, t_stack **b, int check);
void	reverserotate(t_stack **stack);
void	rra(t_stack **a, int check);
void	rrb(t_stack **b, int check);
void	rrr(t_stack **a, t_stack **b, int check);
int		ft_stacksize(t_stack *lst);
void	alg_sort(t_stack **a, t_stack **b, int ac);
void	sort_three(t_stack **a);
t_stack	*biggest_node(t_stack	**stack);
int		is_sorted(t_stack *stack);
//void	sort_five(t_stack **a, t_stack **b);
t_stack	*find_first(t_stack *last);
//void	solve_five(t_stack **a, t_stack **b, t_stack *above, t_stack *heada);
void	sort_two(t_stack **a);
void	alg_resolve(t_stack **a, t_stack **b);
void	index_median(t_stack *stack);
void	fill_parameters_a(t_stack *a, t_stack *b);
void	fill_parameters_b(t_stack *a, t_stack *b);
void	target_from_a(t_stack *a, t_stack *b);
void	target_from_b(t_stack *a, t_stack *b);
t_stack	*min_nbr(t_stack *a);
t_stack	*max_nbr(t_stack *b);
void	cost_analysis(t_stack *a, t_stack *b);
void	ft_cheapest_movement(t_stack *a);
void	push_to_b(t_stack **a, t_stack **b);
void	push_to_a(t_stack **a, t_stack **b);
void	reverse_while(t_stack **a, t_stack **b, t_stack *cheapest_node);
void	rotate_while(t_stack **a, t_stack **b, t_stack *cheapest_node);
t_stack	*find_min(t_stack *stack);
void	min_top(t_stack **a);
t_stack	*median_position(t_stack *a);
t_stack	*get_cheapest(t_stack *stack);
void	def_push(t_stack **stack, t_stack *cheapest_node, int flag);

#endif
