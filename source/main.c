/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:40:36 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/20 09:47:32 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	char	*path;
	char	**cmd;
	pid_t	child1;
	pid_t	child2;
	int		fd[2];

	if (pipe(fd) == -1)
		return (1);
	child1 = fork();
	if (child1 == -1)
		return (2);
	if (child1 == 0)
	{
		dup2(fd[1], STDOUT_FILENO);
		cmd = get_cmd(argv[2]);
		path = get_path(cmd,envp);
		close(fd[1]);
		close(fd[0]);
		execve(path, cmd, envp);
	}
	child2 = fork();
	if (child2 == -1)
		return (3);
	if (child2 == 0)
	{
		dup2(fd[0], STDIN_FILENO);
		cmd = get_cmd(argv[3]);
		path = get_path(cmd,envp);
		close(fd[1]);
		close(fd[0]);
		execve(path, cmd, envp);
	}
	waitpid(child1, NULL, 0);
	waitpid(child2, NULL, 0);
	(void)argc;
	return (0);
}
