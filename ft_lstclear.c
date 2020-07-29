/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 14:20:51 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/29 15:52:53 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*element;
	t_list		*to_delete;

	element = *lst;
	while (element != NULL)
	{
		to_delete = element;
		element = element->next;
		del(to_delete->content);
		free(to_delete);
	}
	*lst = NULL;
}
