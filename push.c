/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:47:31 by sreo              #+#    #+#             */
/*   Updated: 2024/10/13 20:10:34 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stack_b, t_list **stack_a)
{
	if (push(stack_b, stack_a) == false)
		return (1);
	ft_putendl_fd("pb", 1);
	return (0);
}
