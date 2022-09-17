/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:57:11 by smeethon          #+#    #+#             */
/*   Updated: 2022/09/18 03:31:15 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	write2(char c);
int	putstr(char *x);
int	ptr2(unsigned long x);
int	check2(va_list x, const char str);
int	nbr(int n);
int	unbr(unsigned int n);
int	bigx(unsigned int x);
int	lowx(unsigned int x);

#endif
