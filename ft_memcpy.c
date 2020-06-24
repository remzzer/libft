/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:59:12 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/24 14:30:27 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t	count;
	char	*dest;
	char	*src;

	count = 0;
	dest = (char *)destination;
	src = (char *)source;
	if (!dest && !src)
		return (NULL);
	while (count < size)
	{
		dest[count] = src[count];
		count++;
	}
	return(dest);
}
