/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printexit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:54:56 by evlad             #+#    #+#             */
/*   Updated: 2017/04/13 17:35:23 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freestack(t_stack *stack)
{
	t_element *tmp;

	tmp = NULL;
	if (!stack)
		return ;
	while (stack->first)
	{
		tmp = stack->first;
		stack->first = stack->first->next;
		free(tmp);
	}
	free(stack);
}

void	freexit(t_stack *stack, char *str)
{
	size_t	i;

	i = 0;
	if (str[0] == '-' && str[1])
		i++;
	while (str[i])
	{
		if (!ft_strchr("0123456789", str[i]))
		{
			freestack(stack);
			printexit("Error\n");
		}
		i++;
	}
	if (ft_atoi(str) > 2147483647 || ft_atoi(str) < -2147483648)
	{
		freestack(stack);
		printexit("Error\n");
	}
}

void	printexit(char *str)
{
	ft_printf("%s", str);
	exit(EXIT_FAILURE);
}
