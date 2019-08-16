/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 19:02:00 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/22 22:04:18 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar (char c)
{
    write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;	
	}
}

int		main(int argc, char **argv)
{
	int i;
	
	i = 0;
	
	char *str = argv[1];
	if(argc == 4)
	{		
	if (argv[2][1] != '\0' || argv[3][1] != '\0')	
	{
		ft_putstr("\n");
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[2][0] == argv[1][i])
			{
				str[i] = argv[3][0];
				i++;
			}
			else if (argv[2][0] != argv[1][i])
				i++;
		}
	ft_putstr(str);	
	}
	}
	else
		ft_putstr("\n");

return (0);
	}
