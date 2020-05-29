/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 20:41:10 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:48:25 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	size_t			sizest;
	unsigned char	*d;
	unsigned char	*s;

	i = ft_strlen(dst);
	sizest = size;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (i < size - 1)
	{
		while (i < size - 1 && *s)
		{
			*(d + i) = *s;
			d++;
			s++;
			size--;
		}
		*(d + i) = '\0';
	}
	if (i >= sizest)
		return (ft_strlen(src) + sizest);
	return (ft_strlen(src) + i);
}
