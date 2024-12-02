/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaz <zaz@staff.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 13:14:10 by zaz               #+#    #+#             */
/*   Updated: 2014/02/27 13:15:29 by zaz              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIST_H
#define LIST_H

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list *sort_list(t_list *lst, int (*cmp)(int, int));

#endif