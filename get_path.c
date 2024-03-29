/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:17:52 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/29 14:19:43 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*get_path(char **cmd, char **path)
{
	int		i;
	char	*aux;
	char	**temp;
	char	*cmd_path;

	i = -1;
	while (path[++i])
	{
		if (ft_strnstr(path[i], "PATH=", 5))
			break ;
	}
	temp = ft_split(path[i] + 5, ':');
	i = -1;
	while (temp[++i])
	{
		aux = ft_strjoin(temp[i], "/");
		cmd_path = ft_strjoin(aux, cmd[0]);
		free(aux);
		if (access(cmd_path, F_OK | X_OK) == 0)
			return (cmd_path);
		free(cmd_path);
	}
	error_exit_cmd(cmd[0]);
	return (0);
}
