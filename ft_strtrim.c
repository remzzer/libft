/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:38:29 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/13 17:57:14 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		first;
	int		last;

	len = ft_strlen(s1);
	first = 0;
	last = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
	{
		first++;
	}
	if (len - first <= 0)
		return (ft_substr(s1, 0, 0));
	while (len - 1 - last >= 0 && ft_strchr(set, s1[len - 1 - last]))
	{
		last++;
	}
	return (ft_substr(s1, first, len - first - last));
}
