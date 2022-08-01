/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:23:57 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:05:13 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*liste;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	liste = *lst;
	liste = ft_lstlast(liste);
	liste->next = new;
}
/* 
int	main(void)
{
	t_list *lst = ft_lstnew("bir");
	t_list *lst2 = ft_lstnew("iki");
	t_list *new = ft_lstnew("üc");
	lst->next = lst2;
	printf("%s\n", lst->content);
	printf("%p\n", lst->next);
	printf("%s\n", lst2->content);
	printf("%p\n", lst2->next);
	printf("%s\n", new->content);
	printf("%p\n\n", new->next);
	ft_lstadd_back(&lst, new);	
	printf("%s\n", lst->content);
	printf("%p\n", lst->next);
	printf("%s\n", lst2->content);
	printf("%p\n", lst2->next);	
	printf("%s\n", new->content);
	printf("%p\n", new->next);
} */