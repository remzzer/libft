/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:08:04 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/14 13:02:12 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		w_count(const char *str, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (str[0] != c)
		count++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static int		w_length(const char *str, char c,  int pos)
{
	int		count;

	count = 0;
	while (str[count + pos] && str[count + pos] != c)
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!(tab = (char **)malloc(sizeof(*tab) * (w_count(s, c) + 1))))
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = ft_substr(s, i, w_length(s, c, i));
			i = i + w_length(s, c, i);
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

int		main(void)
{
	char	**tab = ft_split("bieeeeenlebonjour", 'e');
	int		i;

	i = 0;
	//printf("compteur:%d\n", w_count("bienlebonjour", 'e'));
	//printf("length:%d\n", w_length("bienlebonjour", 'e', 0));
	while (tab[i])
	{
		//printf("Res: %s\n", tab[i]);
		printf("Test: %s\n", tab[i++]);
	}
	return (0);
}

