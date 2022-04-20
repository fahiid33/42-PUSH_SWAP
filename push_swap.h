/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstitou <fstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 03:00:31 by fahd              #+#    #+#             */
/*   Updated: 2022/04/18 22:11:17 by fstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct t_list
{
	int				val;
	struct t_list	*next;
}t_list;

void	sa(t_list *a);
void	sa_b(t_list *a);
void	sb(t_list *b);
void	ra_b(t_list *a);
void	rb_b(t_list *b);
void	sb_b(t_list *b);
void	rra_b(t_list **a);
void	rrb_b(t_list **b);
void	ss(t_list*a, t_list *b);
void	ra(t_list *a);
void	rb(t_list *b);
void	rr(t_list *a, t_list *b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	ft_putstr(char *str);
int		lst_size(t_list *stack);
int		empty_list(t_list *stack);
int		get_last(t_list **list);
int		ft_atoi(const char *str);
void	swap(int *i, int *j);
void	sort_two(t_list *a);
void	sort_three(t_list **a);
void	four_helper(t_list **a);
void	five_helper(t_list **a);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
void	av_to_a(t_list **a, int ac, char **av);
int		ft_is_digit(char c);
int		check_num(t_list *a, char *s);
int		check_dup(t_list *a);
int		not_sorted(t_list *a);
void	ft_exit(void);
void	free_list(t_list *list);
void	push_stack(t_list **list, int data);
void	push_to_a(t_list **a, t_list **b);
void	push_to_a_b(t_list **a, t_list **b);
void	push_to_b(t_list **a, t_list **b);
void	push_to_b_b(t_list **a, t_list **b);
int		get_max_bits(int argc);
int		*bub_sort(int arc, int tab[]);
int		ft_strcmp(char *s1, char *s2);
t_list	*push_swapinho(t_list *a, t_list *b, int ac);
t_list	*fill_list(char **av, int ac);
t_list	*fill_list_1arg(char **av);
t_list	*radixinho(t_list *a, t_list *b, int argc);
t_list	*bubblesort(t_list *a, int f);
t_list	*index_list(t_list *tmp, t_list *head, int tab[], int arc);
void	ft_cmp(char *str, t_list **a, t_list **b);
void	*ft_freedom(char **str);
int		ft_words(char const *s, char c);
int		ft_charcount(const char *s, char c, int i);
char	**ft_splitcpy(const char *s, char c, char **str, int wd);
char	**ft_split(char const *s, char c);

#endif
