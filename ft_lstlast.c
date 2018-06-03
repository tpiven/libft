/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:09:10 by tpiven            #+#    #+#             */
/*   Updated: 2017/11/09 20:09:12 by tpiven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstlast(t_list *list)
{
	t_list	*tmp;

	if (list != NULL)
	{
		tmp = list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		return (tmp);
	}
	return (NULL);
}
