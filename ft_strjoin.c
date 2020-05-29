/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 15:46:38 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 19:21:59 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*result;

	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (*s)
	{
		result = s;
		ft_strlcpy(s, s1, ft_strlen(s1));
		s = s + ft_strlen(s1);
		ft_strlcpy(s, s2, ft_strlen(s2));
	}
	*s = '\0';
	return (result);
}
