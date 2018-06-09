/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 12:41:25 by tpiven            #+#    #+#             */
/*   Updated: 2017/11/03 12:41:26 by tpiven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_number_letter(char **array, char *str, char c)
{
	int		j;
	int		n;

	j = 0;
	n = 0;
	while (*str != '\0')
	{
		str++;
		if ((*str == c || *str == '\0') && *(str - 1) != c)
		{
			array[j] = (char*)malloc(sizeof(array) * (n + 1));
			if (array[j] == NULL)
			{
				while (j--)
					ft_strdel(&array[j]);
				return (NULL);
			}
			j++;
			n = 0;
		}
		n++;
	}
	array[j] = NULL;
	return (array);
}

static char		**ft_array(char **array, char *str, char c)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = 0;
	n = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		array[j][n] = str[i];
		i++;
		n++;
		if (str[i] == c || str[i] == '\0')
		{
			array[j][n] = '\0';
			j++;
			n = 0;
			while (str[i] == c)
				i++;
		}
	}
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**table;
	char		*str;

	if (s != NULL)
	{
		str = (char*)s;
		table = (char**)malloc(sizeof(*table) * (ft_number_word(str, c) + 1));
		if (table == NULL)
			return (NULL);
		table = ft_number_letter(table, str, c);
		if (table == NULL)
		{
			free(table);
			table = NULL;
		}
		table = ft_array(table, str, c);
		return (table);
	}
	return (0);
}
