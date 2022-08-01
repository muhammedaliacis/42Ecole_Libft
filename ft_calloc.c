/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:23:24 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:04:45 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbayt, size_t size)
{
	void	*str;

	str = malloc(size * nbayt);
	if (!str)
		return (str);
	return (ft_memset(str, 0, size * nbayt));
}
/*
int	main(void)
{
	size_t x = 5;
	size_t y = 6;
	char *s;
	int	i = 0;

	s = ft_calloc(x, y);
	while(s[i] == 0)
	{
		printf("%d", s[i]);
		i++;
	}
}
*/