/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 12:41:11 by tpiven            #+#    #+#             */
/*   Updated: 2017/11/03 12:41:12 by tpiven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	if (s != NULL)
	{
		i = 0;
		j = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j--;
		if (j < i)
		{
			str = (char*)ft_memalloc(1);
			return (str);
		}
		str = ft_strsub(s, i, (j - i + 1));
		return (str);
	}
	return (0);
}
