/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:15:30 by smeethon          #+#    #+#             */
/*   Updated: 2022/09/12 03:58:39 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	x;
	int		y;

	va_start(x, str);
	y = 0;
	while (*str)
	{
		if (*str == '%')
		{
			y += check2(x, *(str + 1));
			str++;
		}
		else
			y += write2(*str);
		str++;
	}
	va_end(x);
	return (y);
}

int	check2(va_list x, const char str)
{
	if (str == 'c')
		return (write2(va_arg(x, int)));
	else if (str == 's')
		return (putstr(va_arg(x, char *)));
	else if (str == 'p')
	{
		write (1, "0x", 2);
		return (ptr2(va_arg(x, unsigned long)) + 2);
	}
	else if (str == 'd')
		return (nbr(va_arg(x, int)));
	else if (str == 'i')
		return (nbr(va_arg(x, int)));
	else if (str == 'u')
		return (unbr(va_arg(x, unsigned int)));
	else if (str == 'x')
		return (lowx(va_arg(x, unsigned int)));
	else if (str == 'X')
		return (bigx(va_arg(x, unsigned int)));
	else if (str == '%')
		return (write2('%'));
	return (0);
}
// str == d and == i is work simlar in printf 
// but it is difference in scanf
