/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:48:11 by sreo              #+#    #+#             */
/*   Updated: 2024/09/18 23:34:27 by sreo             ###   ########.fr       */
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
	if (swap(stack_b) == false)
		return (1);
	ft_putendl_fd(1, "sb");
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if (swap(stack_a) == false)
		return (1);
	if (swap(stack_b) == false)
		return (1);
	ft_putendl_fd(1, "ss");
	return (0);
}

bool	push(t_list **stack_female, t_list **stack_male)
{
	t_list	*temp;

	if (!stack_male || !*stack_male)
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
	t_list *first;
	t_list *current;

	if (!stack || !*stack || !(*stack)->next)
		return false;
	first = *stack;
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = first;
	*stack = first->next;
	first->next = NULL;
	return true;
}

int ra(t_list **stack_a)
{
	if (rotate(stack_a) == false)
		return (1);
	ft_putendl_fd(1, "ra");
	return (0);
}

int rb(t_list **stack_b)
{
	if (rotate(stack_b) == false)
		return (1);
	ft_putendl_fd(1, "rb");
	return (0);
}

int rr(t_list **stack_a, t_list **stack_b)
{
	if (rotate(stack_a) == false)
		return (1);
	if (rotate(stack_b) == false)
		return (1);
	ft_putendl_fd(1, "rr");
	return (0);
}

bool reverse_rotate(t_list **stack)
{
	t_list *first;
	t_list *last;
	t_list *second_last;

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

int rra(t_list **stack_a)
{
	if(reverse_rotate(stack_a) == false)
		return (1);
	ft_putendl_fd(1, "rra");
	return (0);
}

int rrb(t_list **stack_b)
{
	if(reverse_rotate(stack_b) == false)
		return (1);
	ft_putendl_fd(1, "rrb");
	return (0);
}

int rrr(t_list **stack_a, t_list **stack_b)
{
	if(reverse_rotate(stack_a) == false)
		return (1);
	if(reverse_rotate(stack_b) == false)
		return (1);
	ft_putendl_fd(1, "rrr");
	return (0);
}
