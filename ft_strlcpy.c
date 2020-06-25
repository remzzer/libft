/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 18:04:42 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/25 16:02:29 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t			count;

	count = 0;
	while (dst_size > 0 && count < dst_size - 1 && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	if (dst_size != 0)
		dst[count] = '\0';
	count = 0;
	while (src[count] != '\0')
		count++;
	return (count);
}
