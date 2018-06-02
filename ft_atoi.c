/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 19:36:10 by tpiven            #+#    #+#             */
/*   Updated: 2017/10/25 19:36:12 by tpiven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					neg;
	int					res;
	unsigned long		result;

	neg = 1;
	res = 0;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f' \
			|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		result = result * 10 + (*str - '0');
		str++;
	}
	if (result > 9223372036854775807 && neg == -1)
		return (0);
	if (result > 9223372036854775807 && neg == 1)
		return (-1);
	return (res * neg);
}
