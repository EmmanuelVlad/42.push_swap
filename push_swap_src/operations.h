/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 12:17:13 by evlad             #+#    #+#             */
/*   Updated: 2017/04/13 20:10:11 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H
# include "../libft/libft.h"

/*
** --------------------------------------------------------------------------
**									STRUCTURES
** --------------------------------------------------------------------------
*/

typedef struct			s_element
{
	int					value;
	struct s_element	*next;
}						t_element;

typedef struct			s_stack
{
	struct s_element	*first;
}					t_stack;

/*
** --------------------------------------------------------------------------
**									OPERATIONS
** --------------------------------------------------------------------------
*/

void					sa(t_stack *a);
void					sb(t_stack *b);
void					ss(t_stack *a, t_stack *b);
void					pa(t_stack *a, t_stack *b);
void					pb(t_stack *a, t_stack *b);

#endif
