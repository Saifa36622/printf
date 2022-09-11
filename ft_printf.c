/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:15:30 by smeethon          #+#    #+#             */
/*   Updated: 2022/09/11 23:57:38 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	x;
	int		y;
	int		z;

	va_start(x, str);
	while (str[z] != '\0')
	{
		if (str[z] == '%')
		{
			y += check2 (x, str[z + 1]);
			z++;
		}
		else
			y += write2 (str[z]);
		z++;
	}
	va_end(x);
}

int	ft_check(va_list ptr_arg, const char str)
{
	if (str == 'c')
	
	else if (str == 's')

	else if (str == 'p')
	
	else if (str == 'd')

	else if (str == 'i')

	else if (str == 'u')

	else if (str == 'x')

	else if (str == 'X')

	else if (str == '%')
	
	return(0);
}
