/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:17:52 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/19 09:23:36 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	get_path(char **path)
{
	int	i;

	i = 0;
	while(path[i])
	{
		if(ft_strnstr(path[i], "PATH=", 5))
			break;
		i++;
	}
	ft_printf("%s", path[i]);
	return (0); 
}

int main(int argc, char **argv, char **envp)
{
	get_path(envp);
	(void)argc;
	(void)argv;
	return (0);
}
