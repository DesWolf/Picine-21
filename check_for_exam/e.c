/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:09:09 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/25 11:44:41 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int i;
	i = 0;

	if(argc == 2)
	{
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == ' ' || argv[1][i] == '\t')
		{	
			if (argv[1][i+1] > ' ' && argv[i+1] != '\0')
				ft_putchar(' ');
		}
		else if	(argv[1][i] != ' ' || argv[1][i] != '\t')
			ft_putchar(argv[1][i]);	
		i++;
	}
	}
	ft_putchar('\n');
	return(0);
	}
