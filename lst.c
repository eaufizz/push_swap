/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 23:47:42 by sreo              #+#    #+#             */
/*   Updated: 2024/10/13 20:13:02 by sreo             ###   ########.fr       */
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
