/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:17:10 by smeethon          #+#    #+#             */
/*   Updated: 2022/09/12 03:58:16 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr2(unsigned long x)
{
	int	y;

	y = 0;
	if (x >= 16)
		y += ptr2(x / 16);
	if (x % 16 > 9)
		y += write2(x % 16 + 87);
	else
		y += write2(x % 16 + 48);
	return (y);
}
// pointter base 16 
// 87 <- 'a' - 10
// 48 <- '0'