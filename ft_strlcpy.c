/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 18:04:42 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/24 19:43:08 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	count;
	size_t	src_len;

	count = 0;
	src_len = ft_strlen(src);
	while (dst_size > 0 && count < dst_size - 1 && src_len != 0)
	{
		dst[count] = src[count];
		count++;
	}
	if (dst_size > 0)
		dst[count] = '\0';
	return (src_len);
}
