/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:48:04 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/15 12:32:41 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (s < d)
	{
		i++;
		while (i <= n)
		{
			d[n - i] = s[n - i];
			i++;
		}
	}
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
