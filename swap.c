/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:45:58 by sreo              #+#    #+#             */
/*   Updated: 2024/10/13 20:08:52 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	swap(t_list **stack)
{
	t_list	*first;
	t_list	*second;

	if (!stack || !*stack || !(*stack)->next)
		return (false);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return (true);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == false)
		return (1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == false)
		return (1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if (swap(stack_a) == false)
		return (1);
	if (swap(stack_b) == false)
		return (1);
	ft_putendl_fd("ss", 1);
	return (0);
}
