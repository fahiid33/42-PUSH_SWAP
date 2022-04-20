/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_treat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 08:01:29 by fahd              #+#    #+#             */
/*   Updated: 2022/04/20 01:07:13 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_list *a)
{
	t_list	*tmp;

	while (a->next != NULL)
	{
		tmp = a->next;
		while (tmp != NULL)
		{
			if (a->val == tmp->val)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	not_sorted(t_list *a)
{
	t_list	*to_check;

	to_check = a;
	if (!to_check)
		return (1);
	while (to_check->next != NULL)
	{
		if (to_check->val > to_check->next->val)
			return (1);
		to_check = to_check->next;
	}
	return (0);
}

void	ss(t_list *a, t_list *b)
{
	sa_b(a);
	sb_b(b);
}
