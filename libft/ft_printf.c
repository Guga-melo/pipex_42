/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:35:32 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/13 08:39:52 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	myprint(const char *str, int i, va_list ap)
{
	int	size;

	size = 0;
	if (str[i] == 'c')
		size = ft_printf_c(va_arg(ap, int));
	else if (str[i] == 's')
		size = ft_printf_s(va_arg(ap, char *));
	else if (str[i] == 'p')
		size = ft_printf_s("0x") + ft_printf_x(va_arg(ap, unsigned long));
	else if (str[i] == 'd')
		size = ft_printf_d(va_arg(ap, int));
	else if (str[i] == 'i')
		size = ft_printf_d(va_arg(ap, int));
	else if (str[i] == 'u')
		size = ft_printf_u(va_arg(ap, unsigned int));
	else if (str[i] == 'x')
		size = ft_printf_x(va_arg(ap, unsigned int));
	else if (str[i] == 'X')
		size = ft_printf_xx(va_arg(ap, unsigned int));
	else if (str[i] == '%')
		return (write(1, "%", 1));
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		sum;
	va_list	ap;

	i = 0;
	sum = 0;
	va_start(ap, str);
	while (str[i] != 0)
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			i++;
			sum = sum + myprint(str, i++, ap);
		}
		else
		{
			write(1, &str[i], 1);
			i++;
			sum++;
		}
	}
	va_end(ap);
	return (sum);
}
