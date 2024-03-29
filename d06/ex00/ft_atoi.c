/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 20:46:20 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/09 18:02:02 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *c)
{
	int nb;
	int i;
	int sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (c[i] == '\n' || c[i] == '\0' || c[i] == '\t' || c[i] == '\v' ||
	c[i] == '\f' || c[i] == '\r' || c[i] == ' ')
		i++;
	if (c[i] == '-')
		sign = 1;
	if (c[i] == '-' || c[i] == '+')
		i++;
	while (c[i] >= '0' && c[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (c[i] - 48);
		i++;
	}
	if (sign == 1)
		nb = -nb;
	return (nb);
}
