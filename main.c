/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 18:43:34 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/24 20:16:17 by rrolland         ###   ########.fr       */
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

int		main(void)
{
	char	*yo = "Hello";
	char	*yi = "Hello";
	size_t	n = 3;

	printf("%d", ft_strncmp(yo, yi, n));
	return(0);
}

int		main(void)
{
	char	dest[5] = "";
	const char	*src = "o";
	size_t dst_size = ft_strlen(dest);
	//size_t i = 0;
	printf("%zu", ft_strlcpy(dest, src, dst_size));
	return (0);
}
*/

int		main(void)
{
	int		c;

	c = 1;
	printf("%d", ft_isalpha(c));
	return (0);
}
