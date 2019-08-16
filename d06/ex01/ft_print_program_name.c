/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 13:15:12 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/10 15:51:22 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

int		main(int argc, char **argv)
{
	int index;

	index = 0;
	if (argc > 0)
	{
		while (argv[0][index] != '\0')
		{
			ft_putchar(argv[0][index]);
			index++;
		}
	}
	return (0);
}
