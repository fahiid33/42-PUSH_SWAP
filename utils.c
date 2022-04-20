/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 04:44:10 by fahd              #+#    #+#             */
/*   Updated: 2022/04/17 22:26:36 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}	
}

void	swap(int *i, int *j)
{
	int	temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

int	ft_atoi(const char *str)
{
	long	i;
	long	s;
	long	j;

	i = 0;
	s = 1;
	j = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '-' || str[i] == '+') && ft_is_digit(str[i + 1]))
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_exit();
		j = j * 10 + str[i] - '0';
		i++;
	}
	if ((j > (long)2147483648 && s == -1) || (j > (long)2147483647 && s != -1))
		ft_exit();
	return (j * s);
}

int	lst_size(t_list *stack)
{
	int	i;

	i = 0;
	while (!(empty_list(stack)))
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

int	empty_list(t_list *stack)
{
	if (stack->next == NULL)
		return (1);
	return (0);
}
