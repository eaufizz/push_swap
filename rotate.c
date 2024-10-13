/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:50:35 by sreo              #+#    #+#             */
/*   Updated: 2024/10/13 20:09:58 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*current;

	if (!stack || !*stack || !(*stack)->next)
		return (false);
	first = *stack;
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = first;
	*stack = first->next;
	first->next = NULL;
	return (true);
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == false)
		return (1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == false)
		return (1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if (rotate(stack_a) == false)
		return (1);
	if (rotate(stack_b) == false)
		return (1);
	ft_putendl_fd("rr", 1);
	return (0);
}
