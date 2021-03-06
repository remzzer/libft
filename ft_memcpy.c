/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:59:12 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/16 14:04:59 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *sc, size_t n)
{
	size_t	count;
	char	*dst;
	char	*src;

	count = 0;
	dst = (char *)dest;
	src = (char *)sc;
	if (!dst && !src)
		return (NULL);
	while (count < n)
	{
		dst[count] = src[count];
		count++;
	}
	return (dest);
}
