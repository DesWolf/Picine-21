/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 19:26:44 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/19 21:30:52 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	if (tmp == NULL)
		return (0);
	tmp->item = item;
	tmp->left = NULL;
	tmp->right = NULL;
	return (tmp);
}
