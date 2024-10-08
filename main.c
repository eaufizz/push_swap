/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:21:35 by sreo              #+#    #+#             */
/*   Updated: 2024/09/29 14:56:32 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digit(int argc, char **temp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc > 2)
		i++;
	argc = arg_count(temp);
	ft_printf("%d\n", argc);
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

int	checkarg(int argc, char **argv)
{
	char	**temp;

	if (argc == 2)
		temp = ft_split(argv[1], ' ');
	else
		temp = argv;
	if (temp == NULL)
		return (1);
	if (check_digit(argc, temp))
		return (1);
	return (0);
}

int	arg_to_stack(t_list **stack_a, int argc, char **argv)
{
	char	**temp;
	int		i;

	i = 1;
	if (argc == 2)
		temp = ft_split(argv[1], ' ');
	else
		temp = argv;
	while(temp[i])
	{
		*stack_a->
	}
}

int	main(int argc, char **argv)
{
	t_list	stack_a;
	t_list	stack_b;
	// ft_printf("%d\n", argc);
	// ft_printf("%d\n", arg_count(argv));
	if (argc < 2 || checkarg(argc, argv))
		return (1);
	return (0);
}
