/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 15:36:17 by evlad             #+#    #+#             */
/*   Updated: 2017/04/20 15:45:14 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		add_elem(t_stack *stack, int value)
{
	t_element	*new;

	new = init_element(value);
	new->next = stack->first;
	stack->first = new;
}

void		stock(t_stack *stack, int ac, char **av, t_malloc *malloc)
{
	int	i;

	i = ac - 2;
	while (i > 0)
	{
		freexit(stack, av[i], 0, malloc);
		add_elem(stack, ft_atoi(av[i]));
		i--;
	}
}
