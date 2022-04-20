/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:08:01 by fstitou           #+#    #+#             */
/*   Updated: 2022/04/20 21:56:27 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*bub_sort(int arc, int tab[])
{
	int	i;
	int	j;

	i = 0;
	while (i < arc - 1)
	{
		j = 0;
		while (j < arc - i - 2)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
	return (tab);
}

t_list	*index_list(t_list *tmp, t_list *head, int tab[], int arc)
{
	int	i;

	while (tmp)
	{
		i = -1;
		while (++i < arc)
		{
			if (tmp->val == tab[i])
			{
				tmp->val = i;
				tmp = tmp->next;
				break ;
			}
		}
	}
	free(tab);
	return (head);
}

t_list	*bubblesort(t_list *a, int arc)
{
	t_list	*tmp;
	t_list	*head;
	int		*tab;
	int		i;

	head = a;
	tmp = a;
	tab = malloc(sizeof(int) * arc);
	i = 0;
	while (a)
	{
		tab[i] = a->val;
		a = a->next;
		i++;
	}
	tab = bub_sort(arc, tab);
	return (index_list(tmp, head, tab, arc));
}

int	get_max_bits(int argc)
{
	int		copy_ac;
	int		i;

	copy_ac = argc - 1;
	i = 0;
	while (copy_ac)
	{
		copy_ac = copy_ac >> 1;
		i++;
	}
	return (i);
}
