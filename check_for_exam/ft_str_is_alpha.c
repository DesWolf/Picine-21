/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:15:43 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/24 12:12:40 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while( str[i] != '\0')
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			j++;
		}
		i++;
	}
	if(i == j)
	   return(1);
return(0);	
}
int main(int argc, char **argv)
{
	int i;
	char *str = "\0";

	i = 0;
	
	while( str[i] != '\0')
	{
		str[i] = argv[0][i];
		i++;
	}
	if (argc > 0)
	printf("%d", ft_str_is_alpha(argv[1]));
	return(0);
}
