/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:58 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:07:26 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (((unsigned char)str1[i] - (unsigned char)str2[i]));
}
/*
int main()
{
    char str1[] = "yakup";
    char str2[] = "yakupp";

    printf("%d", ft_strncmp(str1, str2, 6));
}
*/