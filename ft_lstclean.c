/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:22:12 by tpiven            #+#    #+#             */
/*   Updated: 2017/11/09 17:22:13 by tpiven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclean(t_list *lst)
{
	t_list	*tmp;

	if (lst != NULL)
	{
		while (lst)
		{
			tmp = lst->next;
			free(lst);
			lst = NULL;
			lst = tmp;
		}
	}
}
