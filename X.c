/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   X.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:39:13 by smeethon          #+#    #+#             */
/*   Updated: 2022/09/12 03:59:48 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	bigx(unsigned int x)
{
	int	y;

	y = 0;
	if (x >= 16)
		y += bigx(x / 16);
	if (x % 16 > 9)
		y += write2(x % 16 + 55);
	else
		y += write2(x % 16 + 48);
	return (y);
}

int	lowx(unsigned int x)
{
	int	y;

	y = 0;
	if (x >= 16)
		y += lowx(x / 16);
	if (x % 16 > 9)
		y += write2(x % 16 + 87);
	else
		y += write2(x % 16 + 48);
	return (y);
}
// 55 -> 'A' - 10
// 48 -> '0'
