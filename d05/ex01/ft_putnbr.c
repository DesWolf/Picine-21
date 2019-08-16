/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 10:06:15 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/09 18:05:41 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long long nbl;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl = nbl * -1;
	}
	if (nbl == 0)
	{
		ft_putchar(0);
	}
	if ((nbl / 10) > 0)
	{
		ft_putnbr(nbl / 10);
		ft_putchar(nbl % 10 + 48);
	}
		else ft_putchar(nbl % 10 + 48);
}
