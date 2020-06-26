/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:11:13 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/26 16:15:43 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_mem, size_t size_mem)
{
	void	*ptr;

	if (!(ptr = malloc(size_mem * n_mem)))
		return (NULL);
	ft_bzero(ptr, size_mem * n_mem);
	return (ptr);
}
