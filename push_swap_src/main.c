/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:10:07 by evlad             #+#    #+#             */
/*   Updated: 2017/04/20 16:00:44 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
# define DEBUG 0

int		push_swap(int ac, char **av, t_malloc *malloc)
{
	t_stack		*a;
	t_stack		*b;
	t_element	*tmp_a;
	t_element	*tmp_b;

	a = init_a(av[ac - 1], malloc);
	b = init_b();
	stock(a, ac, av, malloc);
	//sort(a, b, stack_size(a));
	sort_30(a, b);
	tmp_a = a->first;
	tmp_b = b->first;
	if (DEBUG)
	{
		ft_printf("\nStack A:\n");
		while (tmp_a)
		{
			ft_printf("%d\n", tmp_a->value);
			tmp_a = tmp_a->next;
		}
		ft_printf("\nStack B:\n");
		while (tmp_b)
		{
			ft_printf("%d\n", tmp_b->value);
			tmp_b = tmp_b->next;
		}
	}
	free_malloc(malloc);
	freestack(a);
	freestack(b);
	return (1);
}

int		main(int ac, char **av)
{
	char		*str;
	t_malloc	*malloc;

	str = ft_strjoin("push_swap ", av[1]);
	malloc = init_malloc();
	if (ac > 1)
	{
		if (ac == 2)
		{
			ac = ft_countsword(av[1], ' ') + 1;
			av = ft_strsplit(str, ' ');
			malloc->av = av;
			malloc->ac = ac;
		}
		free(str);
		push_swap(ac, av, malloc);
	}
	return (1);
}
