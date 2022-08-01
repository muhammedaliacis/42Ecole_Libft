/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:45 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:07:04 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/* 
void lower(unsigned int i, char *s)
{
	if (s[0] >= 65 && s[0] <= 90)
        s[0] = s[0] + 32;
}

int main()
{
    char str[] = "YAKUP";

    ft_striteri(str, lower);
    printf("%s", str);
}
 */