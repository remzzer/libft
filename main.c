/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:43:34 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/24 15:48:02 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
int		main(void)
{
	char	ar[] = "hello";
	printf("%s",ft_memset(ar, 0, 15));
	return (0);
}

int		main(void)
{
    short s_array[7] = {5, 5, 5, 5, 5, 5, 5};
    size_t pos = 0;

    //bzero(s_array, (5  * sizeof(short)));

    for(pos = 0; pos < 7; pos++) 
	{
        printf("%d\n", s_array[pos]);
    }
    return 0;
}

int		main(void)
{
	char	dest[5] = "";
	char	src[5] = "hello";
	size_t	count = 3;
	size_t		i = 0;

	ft_memcpy(dest, src, count);
	for (i = 0; i < count; i++)
	{
		printf("%c\n", dest[i]);
	}
	return (0);
}
*/

int		main(void)
{
	char	*src = "Bonjour.Bien?";
	size_t	len;
	len = strlen(src);
	char	dest[len];
	size_t		i = 0;

	ft_memccpy(dest, src, '.', len);
	for (i = 0; i < len; i++)
	{
		printf("%c\n", dest[i]);
	}
	return (0);
}
