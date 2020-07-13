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

static int		find_c(char const *s, char const c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		find_first_index(char const *s, char const *set)
{
	int		i;

	i = 0;
	while (find_c(set, s[i]) == 1)
	{
		i++;
	}
	return (i);
}

static int		find_last_index(char const *s, char const *set)
{
	int		len;

	len = ft_strlen(s);
	while (find_c(set, s[len - 1]) == 1)
	{
		len--;
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		first;
	int		last;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	first = find_first_index(s1, set);
	last = find_last_index(s1, set);
	if (last < first)
		first = 0;
	if (!(dest = malloc(sizeof(*dest) * (last - first + 1))))
		return (NULL);
	i = 0;
	while ((first + i) < last)
	{
		dest[i] = s1[first + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
