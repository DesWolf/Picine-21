/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:29:16 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/11 15:54:57 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *numb;

	i = 0;
	if (min >= max)
		return (NULL);
	numb = (int *)malloc(sizeof(int) * max - min);
	if (numb == NULL)
		return (NULL);
	while (i < max - min)
	{
		numb[i] = min + i;
		i++;
	}
	return (numb);
}
