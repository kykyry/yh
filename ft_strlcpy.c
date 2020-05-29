/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 16:17:04 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:49:23 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < size && *s)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	*d = '\0';
	return (ft_strlen(src));
}
