/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 15:50:38 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 21:10:37 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*st;
	char	*ststart;
	size_t	i;

	i = 0;
	st = malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_memcpy(st, s, ft_strlen(s));
	if (!st)
		return (0);
	ststart = st;
	while (*s && s && f)
	{
		*st = (*f)(i, *s);
		i++;
		s++;
		st++;
	}
	*st = '\0';
	return (ststart);
}
