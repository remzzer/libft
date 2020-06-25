/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 18:22:34 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/25 18:46:42 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*dest;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(source);
	i = 0;
	dest = malloc(sizeof(char) * (src_len + 1));
	if (!dest)
		return (NULL);
	while (i < src_len)
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
