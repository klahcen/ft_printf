/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convbaseX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <lkazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:37:38 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/22 18:15:14 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_convbase_up(unsigned int n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_convbase_up(n / 16);
		count += ft_putchar(base[n % 16]);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}
