/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boss <boss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:21:35 by sreo              #+#    #+#             */
/*   Updated: 2024/11/10 23:52:58 by boss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digit(char **temp)
{
	int	i;
	int	j;
	int	argc;

	i = 1;
	j = 0;
	argc = arg_count(temp);
	while (i < argc)
	{
		while (temp[i][j])
		{
			if (ft_is_digit(temp[i]) == 0)
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int	arg_to_stack(t_list **stack_a, char **argv)
{
	int		i;
	t_list	*list;
	t_list	*new_node;

	i = 1;
	*stack_a = ft_lstnew(ft_atoi(argv[i]));
	if (*stack_a == NULL)
		return (1);
	list = *stack_a;
	while (argv[++i])
	{
		new_node = ft_lstnew(ft_atoi(argv[i]));
		if (new_node == NULL)
			return (1);
		list->next = new_node;
		list = new_node;
	}
	return (0);
}

int	convert_arg(char ***argv)
{
	char	*temp;
	char	*arg0;

	arg0 = "./push_swap ";
	temp = ft_strjoin(arg0, (*argv)[1]);
	if (temp == NULL)
		return (1);
	*argv = ft_split(temp, ' ');
	free(temp);
	if (*argv == NULL)
		return (1);
	return (0);
}

int	set_index(t_list **stack_a, int stack_len)
{
	int		i;
	int		min_value;
	t_list	*temp;
	t_list	*min_node;

	i = -1;
	while (++i < stack_len)
	{
		min_value = INT_MAX;
		min_node = NULL;
		temp = *stack_a;
		while (temp)
		{
			if (temp->value == min_value && temp->index == -1)
				return (1);
			if (temp->value < min_value && temp->index == -1)
			{
				min_node = temp;
				min_value = temp->value;
			}
			temp = temp->next;
		}
		min_node->index = i;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	if (argc == 2 && convert_arg(&argv))
		return (ft_printf("Error: split failed\n"), 1);
	if (check_digit(argv))
		return (ft_printf("Error: invalid digid\n"), 1);
	arg_to_stack(&stack_a, argv);
	if (argc == 2)
		ft_free_split(argv);
	if (set_index(&stack_a, ft_lstsize(stack_a)))
		return (ft_printf("Error: is duplicate\n"), 1);
	if (is_sorted(stack_a, 0))
	{
		if (ft_lstsize(stack_a) < 6)
			simple_sort(&stack_a, &stack_b);
		else
			sort_stack(&stack_a, &stack_b);
	}
	print_stack(stack_a);
	return (0);
}
