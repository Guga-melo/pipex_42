/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:52:41 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:31:00 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n--)
	{
		if (*str == (unsigned char) c)
			return (&*str);
		str++;
	}
	return (0);
}
/*#include <stdio.h>

int main()
{
	char str[50] = "hello world";
	int c;
	size_t n;

	c = 'o';
	n = 5;
	printf("%s", ft_memchr(str, c, n));
	return (0);
}*/
