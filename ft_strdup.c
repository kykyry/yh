/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 19:23:24 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:46:21 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	i;

	i = ft_strlen(str);
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (0);
	while (*str)
	{
		*s = *str;
		s++;
		str++;
	}
	*s = '\0';
	return (s - i);
}
