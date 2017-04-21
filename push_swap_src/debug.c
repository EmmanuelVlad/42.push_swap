/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:38:07 by evlad             #+#    #+#             */
/*   Updated: 2017/04/21 15:47:49 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"

void	print_stack(t_stack *stack, char type)
{
	t_element	*tmp;
	int			i;

	tmp = stack->first;
	i = 1;
	ft_printf("\nStack %c:\n", type);
	while (tmp)
	{
		ft_printf("%5d: %10d\n", i, tmp->value);
		tmp = tmp->next;
		i++;
	}
	ft_printf("\n\n");
}
