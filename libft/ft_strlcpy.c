/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:07:17 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 10:38:43 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			len_src;
	unsigned char	*str_src;

	i = 0;
	str_src = (unsigned char *) src;
	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	while (str_src[i] != 0 && i < dstsize - 1)
	{
		dst[i] = str_src[i];
		i++;
	}
	dst[i] = 0;
	return (len_src);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	char dst[30] = "abc";
	char src[30] = "defg";
	size_t n;

	n = 6;
	printf("%lu\n",ft_strlcpy(dst, src, n));
	printf("%s", dst);
	return (0);
}*/
