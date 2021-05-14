/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_argument.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeolee <hyeolee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:53:42 by hyeolee           #+#    #+#             */
/*   Updated: 2021/05/14 17:12:04 by hyeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int		check_num(char *str)
{
	int			i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '-' && ft_strlen(str) > 1)
			return (SUCCESS);
		if (str[i] < '0' || str[i] > '9')
			return (FAILED);
		i++;
	}
	return (SUCCESS);
}

static int		is_valid_number(int argc, char **argv)
{
	int			i;

	i = 1;
	while (i < argc)
	{
		if (!check_num(argv[i]))
			return (FAILED);
		i++;
	}
	return (SUCCESS);
}

static int		is_not_duplicated(int argc, char **argv)
{
	int			i;
	int			j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (!ft_strcmp(argv[i], argv[j]))
				return (FAILED);
			j++;
		}
		i++;
	}
	return (SUCCESS);
}

static int		is_in_int_max(int argc, char **argv)
{
	long long	num;
	int			i;

	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (FAILED);
		i++;
	}
	return (SUCCESS);
}

int				check_valid_argument(int argc, char **argv)
{
	if (argc > 1)
	{
		if (!is_valid_number(argc, argv))
			return (FAILED);
		if (!is_in_int_max(argc, argv))
			return (FAILED);
		if (!is_not_duplicated(argc, argv))
			return (FAILED);
		return (1);
	}
	else
		return (1);
}
