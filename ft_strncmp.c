/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 17:53:12 by rrolland          #+#    #+#             */
/*   Updated: 2020/07/14 10:05:30 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] != '\0' && s2[count] != '\0'
			&& s1[count] == s2[count]
			&& count < n - 1)
		count++;
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
