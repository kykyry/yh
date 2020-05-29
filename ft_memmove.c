/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:24:28 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:37:36 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)source;
	if (d < s)
		while (n > 0)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	else
		while (n > 0)
		{
			*(d + n) = *(s + n);
			n--;
		}
	return (dest);
}
