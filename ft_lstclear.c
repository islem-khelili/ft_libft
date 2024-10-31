/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhelili <ikhelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:23:03 by ikhelili          #+#    #+#             */
/*   Updated: 2024/10/18 19:04:21 by ikhelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst != NULL && del != NULL)
	{
		current = *lst;
		while (current != NULL)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL ;
	}
}
