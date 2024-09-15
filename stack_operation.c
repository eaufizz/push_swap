/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:48:11 by sreo              #+#    #+#             */
/*   Updated: 2024/09/15 19:14:02 by sreo             ###   ########.fr       */
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
	ft_putendl_fd(1, "sa");
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_a) == false)
		return (1);
	ft_putendl_fd(1, "sb");
	return (0);
}

int	ss(t_list **stack_a, t_list **stack)
{
	if (swap(stack_a) == false)
		return (1);
	if (swap(stack_b) == false)
		return (1);
	ft_purendl_fd(1, "ss");
	return (0);
}

bool	push(t_list **stack_female, t_list **stack_male)
{
	t_list	*temp;

	if (!stack_male || !*stack_male || !stack_male || !*stack_male)
		return (false);
	temp = *stack_male;
	*stack_male = (*stack_male)->next;
	temp->next = *stack_female;
	*stack_female = temp;
	return (true);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == false)
		return (1);
	ft_putendl_fd(1, "pa");
	return (0);
}

int	pb(t_list **stack_b, t_list **stack_a)
{
	if (push(stack_b, stack_a) == false)
		return (1);
	ft_putendl_fd(1, "pb");
	return (0);
}

bool rotate(t_list **stack)
{
	
}
