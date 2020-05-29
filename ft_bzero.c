/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:04:29 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:19:47 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	size_t			sch;
	unsigned char	*d;

	d = (unsigned char *)dest;
	sch = 0;
	while (sch < n)
	{
		*d = '\0';
		d++;
		sch++;
	}
}
