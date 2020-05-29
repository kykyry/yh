/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:13:56 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 19:24:59 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)source;
	if ((*d == 0 && *s == 0) || (ft_strlen((const char *)d) < n))
		return (0);
	while (*s && n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
