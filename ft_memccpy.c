/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 14:33:15 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/24 17:49:03 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t size)
{
	size_t			count;
	char			*dst;
	char			*src;
	unsigned char	i;

	count = 0;
	dst = (char *)dest;
	src = (char *)source;
	i = (unsigned char)c;
	while (count < size)
	{
		dst[count] = src[count];
		count++;
		if (src[count - 1] == i)
		{
			return (dest + i);
		}
	}
	return (NULL);
}
