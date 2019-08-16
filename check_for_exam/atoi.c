/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:52:25 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/24 10:38:29 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int res;
	int minus;

	i = 0;
	res = 0;
	minus = 0;
	
	if(str[i] <= ' ')
		return(0);

	if(str[i] == '-')
	{
		minus = 1;
		i++;
	}
	if(str[i] == '-' || str[i] == '+')
		i++;

	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}

	if(minus == 1)
		res = -res;

	printf("%d", res);
	return(0);
}


int main()
{
	ft_atoi("+d123");
	return(0);
}
