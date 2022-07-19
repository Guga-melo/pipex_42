/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:36:59 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/30 09:02:17 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	char			*str;
	unsigned char	put;

	i = 0;
	str = (char *)b;
	put = (unsigned char)c;
	while (len > 0)
	{
		str[len - 1] = put;
		len--;
	}
	return (str);
}
/*#include <stdio.h>

int main ()
{
	char str[50] = "ola mundo :D, adeus mundo :c";
	printf("%s", ft_memset(str, '#', 3));
	return (0);
}*/
