/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:39:26 by boss              #+#    #+#             */
/*   Updated: 2024/11/10 09:48:48 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack_a(t_list *stack_a, int digit)
{
	t_list	*current;

	current = stack_a;
	while (current != NULL)
	{
		if ((current->index >> digit) & 1)
			current = current->next;
		else
			return (1);
	}
	return (0);
}

int	check_stack_b(t_list *stack_b, int digit)
{
	t_list	*current;

	current = stack_b;
	while (current != NULL)
	{
		if ((current->index >> digit) & 1)
			return (1);
		current = current->next;
	}
	return (0);
}

// void sort_stack(t_list **stack_a, t_list **stack_b)
// {
// 	int		maxbit;
// 	int		digit;

// 	digit = 0;
// 	maxbit = max_bit(ft_lstsize(*stack_a) - 1);
// 	while(digit <= maxbit)
// 	{
// 		while(check_stack_a(*stack_a, digit))
// 		{
// 			if (((*stack_a)->index >> digit) & 1)
// 				ra(stack_a);
// 			else
// 				pb(stack_b, stack_a);
// 		}
// 		digit ++;
// 		if(digit > maxbit)
// 			break;
// 		while(check_stack_b(*stack_b, digit))
// 		{
// 			if (((*stack_b)->index >> digit) & 1)
// 				pa(stack_a, stack_b);
// 			else
// 				rb(stack_b);
// 		}
// 	}
// 	while(*stack_b != NULL)
// 		pa(stack_a, stack_b);
// }


void sort_stack(t_list **stack_a, t_list **stack_b)
{
	int		maxbit;
	int		digit;
	int		stack_len;
	int		i;

	digit = 0;
	stack_len = ft_lstsize(*stack_a);
	maxbit = max_bit(stack_len - 1);
	while(digit <= maxbit)
	{
		i = 0;
		stack_len = ft_lstsize(*stack_a);
		while(i < stack_len)
		{
			if (((*stack_a)->index >> digit) & 1)
				ra(stack_a);
			else
				pb(stack_b, stack_a);
			i++;
		}
		digit ++;
		while(*stack_b != NULL)
		{
			pa(stack_a, stack_b);
		}
	}
}
