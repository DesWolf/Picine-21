/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:46:59 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/11 21:50:29 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && j > k) || (i < j && j < k))
		return (j);
	if ((j > i && i > k) || (j < i && i < k))
		return (j);
	if ((j > k && k > i) || (j < k && k < i))
		return (k);
	else
		return (0);
}
