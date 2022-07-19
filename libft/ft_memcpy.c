/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:22:08 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:32:43 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str_dst;
	const char	*str_src;
	size_t		i;

	i = 0;
	str_dst = (char *) dst;
	str_src = (const char *) src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	size_t n;
	char src[20] = "";
	char dst[20] = "";

	n = NULL;
	memcpy(dst, src, n);
	printf("%s\n", dst);
	return (0);
}*/
