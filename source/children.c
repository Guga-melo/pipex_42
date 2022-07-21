/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   children.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:46:42 by gussoare          #+#    #+#             */
/*   Updated: 2022/07/21 14:22:43 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	child1(char	**argv, char **envp, int *fd)
{
	int		file1;
	pid_t	child1;
	char	*path;
	char	**cmd;

	file1 = open(argv[1], O_RDONLY, 0777);
	if (file1 == -1)
	{
		ft_putendl_fd(strerror(errno), 2);
		exit(EXIT_FAILURE);
	}
	child1 = fork();
	if (child1 == -1)
		return (2);
	if (child1 == 0)
	{
		dup2(file1, STDIN_FILENO);
		dup2(fd[1], STDOUT_FILENO);
		close(fd[0]);
		close(fd[1]);
		cmd = get_cmd(argv[2]);
		path = get_path(cmd, envp);
		execve(path, cmd, envp);
		close(file1);
	}
	return (child1);
}

int	child2(char	**argv, char **envp, int *fd)
{
	int		file2;
	pid_t	child2;
	char	*path;
	char	**cmd;

	file2 = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (file2 == -1)
	{
		ft_putendl_fd(strerror(errno), 2)
		exit(EXIT_FAILURE);
	}
	child2 = fork();
	if (child2 == -1)
		return (3);
	if (child2 == 0)
	{
		dup2(file2, STDOUT_FILENO);
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
		close(fd[1]);
		cmd = get_cmd(argv[3]);
		path = get_path(cmd, envp);
		execve(path, cmd, envp);
		close(file2);
	}
	return (child2);
}
