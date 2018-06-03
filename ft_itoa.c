/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 19:11:59 by tpiven            #+#    #+#             */
/*   Updated: 2017/10/28 19:12:01 by tpiven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strnumb(int n, char *str, int len)
{
	int i;
	int nbr;

	i = len - 1;
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	while (i--)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	str[len - 1] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	int		i;
	int		nb;
	char	*str;
	int		neg;

	i = 0;
	neg = 0;
	nb = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		nb = -n;
		neg = 1;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	str = (char*)malloc(sizeof(char) * (i + neg + 2));
	if (str == NULL)
		return (NULL);
	str = ft_strnumb(n, str, (i + neg + 2));
	return (str);
}
