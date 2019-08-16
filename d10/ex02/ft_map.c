/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:23:47 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/15 22:33:56 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *str;

	i = 0;
	if (length <= 0)
		return (0);
	str = (int *)malloc(sizeof(int) * length);
	if (str == NULL)
		return (0);
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}
