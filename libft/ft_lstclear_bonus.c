/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussoare <gussoare@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:32:27 by gussoare          #+#    #+#             */
/*   Updated: 2022/05/26 09:22:28 by gussoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tempnext;
	t_list	*temp;

	temp = *lst;
	if (!*lst)
		return ;
	while (temp)
	{
		tempnext = temp->next;
		ft_lstdelone(temp, del);
		temp = tempnext;
	}
	*lst = 0;
}
