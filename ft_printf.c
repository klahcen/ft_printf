/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkazaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:55:09 by lkazaz            #+#    #+#             */
/*   Updated: 2023/11/21 15:34:10 by lkazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"
#include<stdio.h>
#include <limits.h>

static int	ft_printf1(va_list list, char c)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = ft_putchar(va_arg(list, int));
	else if (c == 's')
		n = ft_putstr(va_arg(list, char *));
	else if (c == 'd' || c == 'i')
		n = ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		n = ft_unsigned(va_arg(list, unsigned int));
	else if (c == 'x')
		n = ft_convbase_x(va_arg(list, unsigned int));
	else if (c == 'p')
		n = ft_convbase(va_arg(list, unsigned long));
	else if (c == 'X')
		n = ft_convbase_up(va_arg(list, unsigned int));
	else if (c == '%')
		n = ft_putchar('%');
	return (n);
}

int	ft_printf(const char *forma, ...)
{
	int		i;
	int		n;
	va_list	list;

	va_start(list, forma);
	i = 0;
	n = 0;
	if (!forma)
		return (-1);
	while (forma[i])
	{
		if (forma[i] == '%')
		{
			if (forma[i + 1] == '\0')
				break ;
			n += ft_printf1(list, forma[i + 1]);
			i++;
		}
		else
			n += ft_putchar(forma[i]);
		i++;
	}
	va_end(list);
	return (n);
}

// #include<stdio.h>
// int main()
// {
// 	printf("\n####P####\n");
// 	int i = ft_printf("%d",1337);
// 	printf("\n");
// 	int j = printf("%d",1337);
// 	printf("\ni = %d, j= %d", i, j);
//	
// 	printf("\n####U####\n");
// 	int i = ft_printf("%u",-1337);
// 	printf("\n");
// 	int j = printf("%u",-1337);
// 	printf("\ni = %d, j= %d", i, j);
//
// 	printf("\n####X####\n");
// 	int i = ft_printf("%X",1337);
// 	printf("\n");
// 	int j = printf("%X",1337);
// 	printf("\ni = %d, j= %d", i, j);
//
// 	printf("\n####x####\n");
// 	int i = ft_printf("%x",1337);
// 	printf("\n");
// 	int j = printf("%x",1337);
// 	printf("\ni = %d, j= %d", i, j);
//
// 	printf("\n####P####\n");
// 	int i = ft_printf("%p",NULL);
// 	printf("\n");
// 	int j = printf("%p",NULL);
// 	printf("\ni = %d, j= %d", i, j);
//
// 	printf("\n####s####\n");
// 	int i = ft_printf("hhhrhhhrhhhhh %s","x1");
// 	printf("\n");
// 	int j = printf("hhhrhhhrhhhhh %s","x1");
// 	printf("\ni = %d, j= %d", i, j);
//
// 	printf("\n####C####\n");
// 	int i = ft_printf("hhhrhhhrhhhhh %c",NULL);
// 	printf("\n");
// 	int j = printf("hhhrhhhrhhhhh %c",NULL);
// 	printf("\ni = %d, j= %d", i, j);
//
// 	printf("\n####CSDIPXxU####\n");
// 	int i = ft_printf("hhhrhhhrhhhhh%z\n%d\n%u\n%x\n%X\n%p",
// -4294967296, -4294967296, -4294967295, -4294967295, -4294967295);
// 	printf("\n");
// 	int j = printf("hhhrhhhrhhhhh%z\n%d\n%u\n%x\n%X\n%p", 
//-4294967296, -4294967296, -4294967295, -4294967295, -4294967295);
// 	printf("\ni = %d, j= %d", i, j);
// 	return 0;
// }