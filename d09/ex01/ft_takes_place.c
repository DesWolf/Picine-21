/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:13:54 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/11 19:03:49 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 0 && hour <= 11)
	{
		printf("%d%s", hour, ".00 A.M. ");
		printf("%d%s", hour + 1, ".00 A.M.");
	}
	if (hour >= 12 && hour <= 23)
	{
		hour = hour - 12;
		printf("%d%s", hour, ".00 P.M. ");
		printf("%d%s", hour + 1, ".00 P.M.");
	}
	if (hour == 24)
	{
		hour = hour - 12;
		printf("%d%s", hour, ".00 P.M. ");
		printf("%d%s", hour + 1, ".00 P.M.");
	}
}
