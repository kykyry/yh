/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarless <tdarless@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 03:45:03 by tdarless          #+#    #+#             */
/*   Updated: 2020/05/29 15:24:10 by tdarless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int ch)
{
	if (ch >= 32 && ch <= 126)
		return (ch);
	return (0);
}
