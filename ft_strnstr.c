/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 15:52:26 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:54:20 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str2, const char *str1, size_t size)
{
	size_t	sizea;
	char	*b;

	sizea = ft_strlen(str1);
	b = (char *)str2;
	if (!*str1)
		return (b);
	while (*b && size > 0 && size >= sizea)
	{
		if (*b == *str1)
		{
			if (ft_memcmp(b, str1, sizea) == 0 && sizea <= ft_strlen(b))
				return (b);
		}
		b++;
		size--;
	}
	return (0);
}
