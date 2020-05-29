/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 16:05:41 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:39:49 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			sch;
	unsigned char	*d;

	d = (unsigned char *)dest;
	sch = 0;
	while (sch < n)
	{
		*d = (unsigned char)c;
		d++;
		sch++;
	}
	return (dest);
}
