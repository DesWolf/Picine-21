/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:49:55 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/11 14:00:11 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	i++;
	str = (char *)malloc(sizeof(*src) * i);
	if (str == NULL)
	{
		return (0);
	}
	j = i;
	i = 0;
	while (i < j)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
