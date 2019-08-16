/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 21:17:13 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/06 22:58:46 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	if (power == 0)
		return (0);
	if (nb < 0 || nb > 12)
		return (0);
	if ((nb != 1) && (power > 1))
		return (nb * ft_iterative_power(nb, power - 1));
	return (nb);
}
