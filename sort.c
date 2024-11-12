/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boss <boss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:39:26 by boss              #+#    #+#             */
/*   Updated: 2024/11/10 23:58:34 by boss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int		maxbit;
	int		digit;
	int		stack_len;
	int		i;

	digit = 0;
	stack_len = ft_lstsize(*stack_a);
	maxbit = max_bit(stack_len - 1);
	while (digit <= maxbit)
	{
		i = 0;
		stack_len = ft_lstsize(*stack_a);
		while (i < stack_len)
		{
			if (((*stack_a)->index >> digit) & 1)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			i++;
		}
		digit ++;
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
	}
}

void	sort_3(t_list **stack_a, t_list **stack_b, int i)
{
	if ((*stack_a)->index == i)
	{
		pb(stack_b, stack_a);
		ra(stack_a);
		pa(stack_a, stack_b);
	}
	if ((*stack_a)->index == i + 1)
	{
		if (get_index(*stack_a, 1) == i + 0)
			sa(stack_a);
		if (get_index(*stack_a, 1) == i + 2)
			rra(stack_a);
	}
	if ((*stack_a)->index == i + 2)
	{
		ra(stack_a);
		if ((*stack_a)->index == i + 1)
			sa(stack_a);
	}
}

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	while (1)
	{
		if ((*stack_a)->index == 0)
		{
			pb(stack_b, stack_a);
			break ;
		}
		ra(stack_a);
	}
	if (is_sorted(*stack_a, 1))
		sort_3(stack_a, stack_b, 1);
	pa(stack_a, stack_b);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	while (1)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
		{
			pb(stack_b, stack_a);
			if (ft_lstsize(*stack_b) == 2)
				break ;
		}
		else
			ra(stack_a);
	}
	if (is_sorted(*stack_a, 2))
		sort_3(stack_a, stack_b, 2);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if (is_sorted(*stack_a, 0))
		sa(stack_a);
}

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	len;

	len = ft_lstsize(*stack_a);
	if (len == 2)
		sa(stack_a);
	else if (len == 3)
		sort_3(stack_a, stack_b, 0);
	else if (len == 4)
		sort_4(stack_a, stack_b);
	else if (len == 5)
		sort_5(stack_a, stack_b);
}
