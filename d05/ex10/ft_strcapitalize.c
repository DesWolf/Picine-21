/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjeffry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 22:35:08 by wjeffry           #+#    #+#             */
/*   Updated: 2019/07/09 23:54:26 by wjeffry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		str[0] = str[0] - 32;
		i = 1;
		while (str[i] != '\0')
		{
			if (str[i] == 33 || str[i] == 32 || (str[i] >= 43 || str[i] == 44 || str[i] == 45 
			|| str[i] == 46 || str[i] == 63 || str[i] == 58 || str[i] == 56 )
			
			if (str[i+1] >= 97 && str[i+1] <= 122)
			{
				str[i+1] = str[i+1] - 32;
				i++;
			}
			}
		else 
		{
		i++;
   		}		
		return(str);
}
}
}