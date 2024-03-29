/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 20:52:20 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/09 20:57:14 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		{
			i++;
		}
		n++;
		return (s1[i] - s2[i]);
	}
	return (0);
}
