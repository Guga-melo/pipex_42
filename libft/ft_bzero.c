/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 08:54:12 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:17:57 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		str[i] = 0;
		n--;
		i++;
	}
}

/*#include <stdio.h>

int main()
{
	char str[40] = "SAY HELLO TO MY LITLLE FRIEND >:O";
	size_t n;

	n = 3;
	ft_bzero(str, n);
	printf("%s", str);
	return (0);
}*/
