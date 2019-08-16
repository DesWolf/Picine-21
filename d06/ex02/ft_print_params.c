/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:59:06 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/10 18:05:03 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

int			main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc > 0)
	{
		while (argv[index] != '\0')
		{
			ft_putstr(argv[index]);
			index++;
		}
	}
	return (0);
}
