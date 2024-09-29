/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:50:35 by sreo              #+#    #+#             */
/*   Updated: 2024/09/29 13:51:18 by sreo             ###   ########.fr       */
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
	ft_putendl_fd(1, "ra");
	return (0);
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == false)
		return (1);
	ft_putendl_fd(1, "rb");
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if (rotate(stack_a) == false)
		return (1);
	if (rotate(stack_b) == false)
		return (1);
	ft_putendl_fd(1, "rr");
	return (0);
}
