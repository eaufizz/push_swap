/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:48:11 by sreo              #+#    #+#             */
/*   Updated: 2024/09/07 18:05:06 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	swap(t_list **stack)
{
	t_list	*first;
	t_list	*next;

	if(ft_lstsize(stack) < 2)
		return (1);
	first = stack;
	next = first->next;
	
}
