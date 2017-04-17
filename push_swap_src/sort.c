/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 13:24:32 by evlad             #+#    #+#             */
/*   Updated: 2017/04/17 16:12:17 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *a, t_stack *b, int amount)
{
	(void)a;
	(void)b;
	if (amount <= 3)
		sort_3(a);
	else if (amount <= 30)
		sort_30(a);
	else
		sort_plus(a);
	ft_printf("%d\n", amount);
}

void	sort_3(t_stack *stack)
{
	int		min;

	min = parse_min(stack);
}

void	sort_30(t_stack *stack)
{
	int		min;

	min = parse_min(stack);
}

void	sort_plus(t_stack *stack)
{
	int		min;

	min = parse_min(stack);
}
