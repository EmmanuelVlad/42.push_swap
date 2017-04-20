/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 14:38:04 by evlad             #+#    #+#             */
/*   Updated: 2017/04/20 15:15:47 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_stack(t_stack *stack)
{
	t_element	*tmp;
	int			value;

	tmp = stack->first;
	value = tmp->value;
	tmp = tmp->next;
	while (tmp)
	{
		if (value > tmp->value)
			return (0);
		value = tmp->value;
		tmp = tmp->next;
	}
	return (1);
}
