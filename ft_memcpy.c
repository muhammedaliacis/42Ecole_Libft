/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:23 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:06:03 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dstt;
	const char		*srcc;
	unsigned int	i;

	i = 0;
	dstt = (char *)dst;
	srcc = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
    char s1[] = "Merhaba";
	size_t a = 3;

    printf("%s", ft_memcpy(s1+2,s1,a));
}*/