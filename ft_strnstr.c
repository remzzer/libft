/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:49:44 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/29 18:23:48 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (s2[i] == '\0')
		return (char *)s1;
	while (s1[i] && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j < len))
		{
			if (s2[j + 1] == '\0')
			{
				return (char *)s1 + i;
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
