/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 15:39:35 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 20:33:46 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*st;
	char	**strez;

	st = (char *)s;
	strez = malloc(sizeof(char) * ft_strlen(s));
	if (!strez)
		return (0);
	while (*st)
	{
		*strez = ft_memchr(st, c, ft_strlen(st));
		st = ft_memchr(++(*strez), c, ft_strlen(st));
		if (!st)
			return (strez);
		*st = '\0';
		strez++;
		st = st + 1;
	}
	return (strez);
}
