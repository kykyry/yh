/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 15:54:49 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 19:26:12 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*s;
	char	a;

	a = (char)ch;
	s = 0;
	while (*str)
	{
		if (*str == a)
			s = (char *)str;
		str++;
	}
	if (a == '\0' && !*str)
		return ((char *)str);
	return (s);
}
