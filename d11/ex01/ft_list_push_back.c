/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:22:11 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/17 22:28:13 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *b;

	b = *begin_list;
	tmp = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = tmp;
	}
	else
	{
		while (b->next)
		{
			b->next = b;
		}
		b->next = tmp;
	}
}
