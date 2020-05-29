/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 15:13:42 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 19:28:49 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				i;
	unsigned long	h;
	unsigned long	border;

	i = 1;
	h = 0;
	border = (unsigned long)922337203685477580;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' ||
	*str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
		i = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		if (((h == border && (*str - '0') > 7) || h > border) && i == 1)
			return (-1);
		if (((h == border && (*str - '0') > 8) || h > border) && i == -1)
			return (0);
		h = h * 10 + (*str - '0');
		str++;
	}
	return ((int)(i * h));
}
