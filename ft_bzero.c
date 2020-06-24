/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 17:43:18 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/23 19:20:45 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *p, size_t n)
{
	size_t	count;
	char	*tab;

	count = 0;
	tab = (char *)p;
	while (count < n)
	{
		tab[count] = 0;
		count++;
	}
}
