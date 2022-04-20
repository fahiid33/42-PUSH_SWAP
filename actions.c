/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 04:35:07 by fahd              #+#    #+#             */
/*   Updated: 2022/04/17 21:47:14 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a)
{
	if (a && a->next)
	{
		swap (&a->val, &a->next->val);
		ft_putstr("sa\n");
	}
}

void	sb(t_list *b)
{
	if (b && b->next)
	{
		swap(&b->val, &b->next->val);
		ft_putstr("sb\n");
	}
}

void	ra(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp && tmp->next)
	{
		swap(&tmp->next->val, &tmp->val);
		tmp = tmp->next;
	}
	ft_putstr("ra\n");
}

void	rb(t_list *b)
{
	t_list	*tmp;

	tmp = b;
	while (tmp && tmp->next)
	{
		swap(&tmp->next->val, &tmp->val);
		tmp = tmp->next;
	}
	ft_putstr("rb\n");
}

void	rra(t_list **a)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return ;
	temp->val = get_last(a);
	temp->next = *a;
	*a = temp;
	ft_putstr("rra\n");
}
