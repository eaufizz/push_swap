/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:48:11 by sreo              #+#    #+#             */
/*   Updated: 2024/10/13 20:10:18 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	reverse_rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;
	t_list	*second_last;

	if (!stack || !*stack || !(*stack)->next)
		return (false);
	first = *stack;
	last = *stack;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	if (second_last)
		second_last->next = NULL;
	last->next = first;
	*stack = last;
	return (true);
}

int	rra(t_list **stack_a)
{
	if (reverse_rotate(stack_a) == false)
		return (1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_list **stack_b)
{
	if (reverse_rotate(stack_b) == false)
		return (1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if (reverse_rotate(stack_a) == false)
		return (1);
	if (reverse_rotate(stack_b) == false)
		return (1);
	ft_putendl_fd("rrr", 1);
	return (0);
}
