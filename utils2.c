/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 05:41:15 by fahd              #+#    #+#             */
/*   Updated: 2022/04/18 22:13:31 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_last(t_list **list)
{
	t_list	*tmp;
	int		i;

	tmp = *list;
	while (tmp->next != NULL && tmp->next->next != NULL)
		tmp = tmp->next;
	i = tmp->next->val;
	free(tmp->next);
	tmp->next = NULL;
	return (i);
}

void	free_list(t_list *list)
{
	t_list	*tmp;

	while (list != NULL)
	{
		tmp = list;
		list = tmp->next;
		free(tmp);
	}
	free(list);
}

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_exit(void)
{
	ft_putstr("Error\n");
	exit(0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
