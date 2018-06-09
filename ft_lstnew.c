/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpiven <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:44:43 by tpiven            #+#    #+#             */
/*   Updated: 2017/11/06 15:44:45 by tpiven           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		list->content = NULL;
	}
	else
	{
		list->content = ft_memalloc(content_size);
		if (list->content == NULL)
		{
			free(list);
			list = NULL;
			return (NULL);
		}
		ft_memcpy(list->content, content, content_size);
	}
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
