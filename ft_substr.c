/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 15:56:22 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 19:14:02 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;

	s1 = (char *)malloc((len + 1) * sizeof(char));
	if (*s1 && ft_strlen(s) >= start)
	{
		s = s + start;
		ft_strlcpy(s1, s, len);
		return (s1);
	}
	return (0);
}
