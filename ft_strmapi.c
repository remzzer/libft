/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 11:55:50 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/03 14:31:54 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char	*(y)(unsigned int i, char c)
{
	char			s;
	unsigned int	count;
	char	*str;

	count = i;
	s = c;
	str = "HEllO";
	if (!(str = malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (str[count])
	{
		str[count] = s;
		count++;
	}
	return (str);
}

int		main(void)
{
	char	*str;
	char	*new_str;
	unsigned int	i;
	char			a;

	i = 0;
	a = 'A';

	str = "hello";
	printf("Old: %s\n", str);
	new_str = ft_strmapi(str, *(y)(i, a));
	printf("NEW: %s\n", new_str);
	return (0);
}
*/
