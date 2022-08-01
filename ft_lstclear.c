/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:05 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:05:20 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
}
/* 
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;

	lst = ft_lstnew(ft_strdup("yakup"));
	lst2 = ft_lstnew(ft_strdup("ali"));
	lst3 = ft_lstnew(ft_strdup("mehmet"));
	lst->next = lst2;
	lst2->next = lst3;
	printf("%s\n", lst->content);
	printf("%s\n", lst2->content);
	printf("%s\n", lst3->content);
	ft_lstclear(&lst, del);
}
 */