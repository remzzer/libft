/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 14:33:15 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/16 13:48:00 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *sc, int c, size_t n)
{
	size_t			count;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)dest;
	src = (unsigned char *)sc;
	count = 0;
	while (count < n)
	{
		dst[count] = src[count];
		if (dst[count] == (unsigned char)c)
			return ((void *)(dest + count + 1));
		count++;
	}
	return (NULL);
}
