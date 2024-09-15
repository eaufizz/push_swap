/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:23:15 by sreo              #+#    #+#             */
/*   Updated: 2024/09/15 19:07:15 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "ft_printf/ft_printf.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}t_list;

int	arg_count(char **args);
int	ft_lstsize(t_list *lst);

#endif