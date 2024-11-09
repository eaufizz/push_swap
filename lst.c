/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boss <boss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 23:47:42 by sreo              #+#    #+#             */
/*   Updated: 2024/11/09 16:30:46 by boss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count ++;
		lst = lst->next;
	}
	return (count);
}

t_list	*ft_lstnew(int value)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp->value = value;
	temp->index = -1;
	temp->next = NULL;
	return (temp);
}

void	print_stack(t_list *stack)
{
	t_list	*current;

	current = stack;
	while (current != NULL)
	{
		ft_printf("%d\t%d\n", current->value, current->index);
		current = current->next;
	}
}

int	is_sorted(t_list *stack)
{
	int		index;
	t_list	*current;

	index = 0;
	current = stack;
	while (current != NULL)
	{
		if (current->index != index)
			return (1);
		current = current->next;
		index++;
	}
	return (0);
}
