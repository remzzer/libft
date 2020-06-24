/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:38:16 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/24 15:31:23 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	*ft_memset(void *p, int val, size_t len);
void	ft_bzero(void *p, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*ft_memccpy(void *dest, const void *source, int c, size_t size);

#endif
