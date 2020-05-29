/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 15:44:36 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:45:11 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*s;
	char	a;

	s = 0;
	a = (char)ch;
	while (*str && *str != a)
		str++;
	if (*str == a)
		s = (char *)str;
	return (s);
}
