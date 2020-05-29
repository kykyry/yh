/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 15:51:24 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:51:44 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 1;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while ((*s1 == *s2) && (i <= n) && *s1 && *s2)
	{
		s1++;
		s2++;
		i++;
	}
	return ((int)(*s1 - *s2));
}
