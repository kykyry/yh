/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 00:02:39 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 20:13:39 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*startset;
	char	*result;
	char	*s;

	startset = (char *)set;
	s = (char *)s1;
	result = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!result)
		return (0);
	while (*s && *set && result)
	{
		if (*s == *set)
			result = ++s;
		set++;
	}
	set = startset;
	s = s + ft_strlen(s) - 1;
	while (*s && *set && result)
	{
		if (*s == *set)
			s--;
		set++;
	}
	*(s + 1) = '\0';
	return (result);
}
