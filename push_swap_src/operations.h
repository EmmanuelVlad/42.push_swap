/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 12:17:13 by evlad             #+#    #+#             */
/*   Updated: 2017/04/13 17:09:37 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H
# include "../libft/libft.h"

typedef struct			s_element
{
	int					value;
	struct s_element	*next;
}						t_element;

typedef struct			s_stack
{
	struct s_element	*first;
}					t_stack;

#endif
