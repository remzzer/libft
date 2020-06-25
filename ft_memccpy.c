/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 14:33:15 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/25 16:39:34 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t size)
{
	size_t			count;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	count = 0;
	while (count < size)
	{
		dst[count] = src[count];
		if (dst[count] == (unsigned char)c)
			return ((void *)(dest + count + 1));
		count++;
	}
	return (NULL);
}
