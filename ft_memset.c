/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:29:53 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/23 19:17:21 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int val, size_t len)
{
	size_t	count;
	char	*tab;

	tab = (char *)p;
	count = 0;
	while (count < len)
	{
		tab[count] = val;
		count++;
	}
	return (p);
}
