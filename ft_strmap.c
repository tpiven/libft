/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 12:38:58 by tpiven            #+#    #+#             */
/*   Updated: 2017/11/03 12:38:59 by tpiven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (s != NULL)
	{
		str = (char*)malloc(sizeof(*str) * (ft_strlen(s) + 1));
		if (str == NULL)
			return (NULL);
		while (*s != '\0')
		{
			str[i] = f(*s);
			s++;
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
