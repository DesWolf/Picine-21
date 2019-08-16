/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 15:19:47 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/06 18:19:30 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int a;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb != 1)
	{
		a = nb * ft_recursive_factorial(nb - 1);
		return (a);
	}
	return (nb);
}
