/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:58:29 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/10 19:28:00 by wjeffry          ###   ########.fr       */
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

	index = argc - 1;
	while (argv[index] != argv[0])
	{
		ft_putstr(argv[index]);
		index--;
	}
	return (0);
}
