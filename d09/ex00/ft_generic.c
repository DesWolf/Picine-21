/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:44:51 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/11 17:01:39 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_generic(void)
{
	char	*t;
	int		i;

	i = 0;
	t = "Tut tut ; Tut tut \n";
	while (t[i] != '\0')
	{
		ft_putchar(t[i]);
		i++;
	}
}
