/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 22:22:24 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/23 15:17:03 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar (char c)
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
	int j;

	int len;

	len = argc - 1;
	i = 0;
	j = 1;

	char str[len];	
	char c;
	if (argc < 3)
		return(0);
	while (j <= len)
	{
		if (argv[j][1] != '\0')
		{
			return (0);
		}
		j++;
	}
	j = 1;
	printf("%d", len);
	while (j < len)
	{
		str[i] = argv[j][0];
		i++;
		j++;
		str[i+1] = '\0';
	}
	printf("%s", str);
	printf("%s", "\n");
	j = 0;
	while (j <= len)
	{
		i = 0;
		while (i <= len - 1)
		{
			if(str[i] >= str[i + 1])
			{
				c = str[i];
				str[i] = str[i+1];
				str[i+1] = c;

				printf("%d, %s, %c, %c, %s, %s" , i,  "   change", str[i], str[i+1], str ,"\n");
			}
			else
			{
				printf("%d, %s, %c, %c, %s, %s" , i, "no change", str[i], str[i+1], str ,"\n");
			}
		i++;
		}
		printf("%s, %s" , "byyyyyyyyyyyylk", "\n");
		j++;
	}
ft_putstr(str);
	return (0);
}
