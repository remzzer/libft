/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrolland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:38:16 by rrolland          #+#    #+#             */
/*   Updated: 2020/06/26 18:47:12 by rrolland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	*ft_memset(void *p, int val, size_t len);
void	ft_bzero(void *p, size_t n);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*ft_memccpy(void *dest, const void *source, int c, size_t size);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size);
size_t	ft_strlcat(char *dst, const char *src, size_t dst_size);
char	*ft_strdup(const char *source);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t n_mem, size_t size_mem);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
