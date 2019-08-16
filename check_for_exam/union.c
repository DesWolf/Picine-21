/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:16:25 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/22 18:56:35 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
return (i);
}

int		main(int argc,char **argv)
{
	int i;
	int j;
	int k;
	int len;
	int len2;

	len = ft_strlen(argv[1]);
	len2 = ft_strlen(argv[2]);

	char str[len + len2];
    str[0] = '\0';
	i = 0;
	j = 0;
	k = 1;

	if (argc > 0)
while (k <= 2)
{	
	i = 0;
	while (argv[k][i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[j] == argv[k][i])
		   		break;
			j++;
		}
		if (str[j] == '\0')
		{
	    	str[j] = argv[k][i];
			str[j+1] = '\0';
		}
		i++;
	}
	k++;
}

	ft_putstr(str);
	ft_putchar('\n');

	return (0);
}
