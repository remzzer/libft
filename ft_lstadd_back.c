/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 09:55:57 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/20 13:44:03 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *element;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	if (!(element = ft_lstlast(*alst)))
		return ;
	element->next = new;
	new->next = NULL;
}
