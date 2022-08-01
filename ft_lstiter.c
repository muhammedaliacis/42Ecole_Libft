/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:09 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:05:27 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	f(void *content)
{
	int i;
	char *str;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

int main(void)
{
	t_list	*lst;
	t_list	*lst2;

	lst = ft_lstnew(ft_strdup("HeLLoWoRLD"));
	lst2 = ft_lstnew(ft_strdup("SeLaMDuNYa"));
	lst->next = lst2;
	printf("%s\n", lst->content);
	printf("%s\n", lst2->content);
	ft_lstiter(lst, f);
	printf("%s\n", lst->content);
	printf("%s\n", lst2->content);
} */