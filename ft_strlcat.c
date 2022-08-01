/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:49 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:07:12 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;

	dlen = 0;
	while (dest[dlen] && dlen < size)
		dlen++;
	i = dlen;
	while (src[dlen - i] && (dlen + 1) < size)
	{
		dest[dlen] = src[dlen - i];
		dlen++;
	}
	if (i < size)
		dest[dlen] = '\0';
	return (i + ft_strlen(src));
}
/*
int main()
{
    char s1[] = "muhammed";
    const char s2[] = "acis";

    printf("%zu\n", ft_strlcat(s1, s2, 9));
}
*/