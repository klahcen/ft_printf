/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convbase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 03:41:26 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/21 15:35:35 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_convbase(unsigned long n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_convbase(n / 16);
		count += ft_putchar(base[n % 16]);
	}
	else
	{
		count += ft_putstr("0x");
		count += ft_putchar(base[n]);
	}
	return (count);
}
