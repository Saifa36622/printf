/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 01:51:23 by smeethon          #+#    #+#             */
/*   Updated: 2022/09/12 03:51:00 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	nbr(int n)
{
	int	x;

	x = 0;
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (n < 0)
	{
		n = -n;
		x += write2('-');
	}
	if (n / 10)
		x += nbr(n / 10);
	x += write2 (n % 10 + '0');
	return (x);
}

int	unbr(unsigned int n)
{
	int	x;

	x = 0;
	if (n / 10)
		x += unbr(n / 10);
	x += write2(n % 10 + '0');
	return (x);
}
