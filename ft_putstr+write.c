/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr+write.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:03:29 by smeethon          #+#    #+#             */
/*   Updated: 2022/09/12 00:11:00 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write2(char c)
{
	return (write (1, &c, 1));
}

int	putstr(char *x)
{
	int	y;

	y = 0;
	if (!x)
	{
		y += putstr("(null)");
		return (y);
	}
	while (*x != '\0')
	{
		y += putstr(*x);
		x++;
	}
	return (y);
}
