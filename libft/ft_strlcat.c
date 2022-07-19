/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:27:28 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/30 10:39:17 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	i_dst;

	i = 0;
	len_dst = ft_strlen(dst);
	i_dst = len_dst;
	len_src = ft_strlen((char *)src);
	if (len_dst + 1 < dstsize && dstsize > 0)
	{
		while (src[i] && len_dst + i < dstsize - 1)
		{
			dst[i_dst] = src[i];
			i_dst++;
			i++;
		}
	}
	dst[i_dst] = 0;
	if (dstsize > len_dst)
		return (len_dst + len_src);
	return (dstsize + len_src);
}
/*#include <string.h>
#include <stdio.h>

int main()
{
	char src[20] = "";
	char dst[20] = "";
	size_t n;
	n = 9;
	printf("%lu\n", ft_strlcat(dst, src, n));
	printf("%s", dst);
	return (0);
}*/
