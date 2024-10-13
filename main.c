/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:21:35 by sreo              #+#    #+#             */
/*   Updated: 2024/10/13 20:36:28 by sreo             ###   ########.fr       */
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
			if (ft_isdigit(temp[i][j]) == 0)
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

void	print_stack(t_list *stack)
{
	t_list	*current = stack;

	while (current != NULL)
	{
		ft_printf("%d\n", current->value); // 各ノードの値を表示
		current = current->next; // 次のノードに移動
	}
}

int set_index()
int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && convert_arg(&argv)) || check_digit(argv))
		return (1);
	arg_to_stack(&stack_a, argv);
	if (argc == 2)
		ft_free_split(argv);
	print_stack(stack_a);
	return (0);
}
