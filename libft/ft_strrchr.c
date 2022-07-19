/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:06:43 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/30 08:14:32 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	find;
	size_t	s_len;

	s_len = ft_strlen(s) + 1;
	str = (char *) s;
	find = (char) c;
	while (s_len--)
	{
		if (find == str[s_len])
			return (&str[s_len]);
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>

int main()
{
    char str[20] = "hello World";
    int c;

    c = 'o';
    printf("%s", ft_strrchr(str, c));
    return (0);
}*/
