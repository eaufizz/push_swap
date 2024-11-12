/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boss <boss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:23:15 by sreo              #+#    #+#             */
/*   Updated: 2024/11/10 23:51:10 by boss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdbool.h>
# include <limits.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

int		max_bit(int nbr);
t_list	*ft_lstnew(int value);
void	print_stack(t_list *stack);
void	ft_free_split(char **split);
int		arg_count(char **args);
int		ft_lstsize(t_list *lst);
int		ft_is_digit(char *str);
int		is_sorted(t_list *stack, int i);
int		get_index(t_list *stack, int value);
void	simple_sort(t_list **stack_a, t_list **stack_b);
void	sort_stack(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

#endif