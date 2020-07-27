/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:26:29 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/15 11:27:30 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_n_len(long n)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_new_str(size_t n)
{
	size_t	i;
	char	*dest;

	dest = (char *)malloc(sizeof(*dest) * n + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		count;

	num = n;
	len = ft_n_len(num);
	str = ft_new_str(len);
	if (!str)
		return (NULL);
	count = 1;
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
		count++;
	}
	while (len >= count)
	{
		str[len - 1] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return (str);
}
