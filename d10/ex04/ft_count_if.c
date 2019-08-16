/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:30:03 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/16 12:44:40 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int numb;

	i = 0;
	numb = 0;
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]) == 1)
		{
			numb++;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (numb);
}