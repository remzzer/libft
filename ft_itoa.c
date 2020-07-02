/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:26:29 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/02 19:22:45 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_n_len(long n)
{
	int			len;

	len = 1;
	if (n < 0)
	{
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	num = n;
	len = ft_n_len(num);
	str = ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	str[len + 1] = '\0';
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return (str);
}

int		main(void)
{
	printf("%s", ft_itoa(-12));
	return (0);
}
