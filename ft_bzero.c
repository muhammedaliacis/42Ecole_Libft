/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:23:18 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:04:42 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*str;
	size_t			i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main()
{
    int i;
    unsigned int mark1[5] = {11, 555, 
	66666, 77777777, 5666566};  

    ft_bzero(mark1, 2);
    printf("%d %d %d %d %d\n" ,mark1[0], mark1[1], mark1[2], mark1[3], mark1[4]);
    printf("%s\n", ch);
    i = 0;
    unsigned char data;
    while (i < sizeof(mark1)){
        if (!(i % 4))
            printf("\n");
        data = *(((unsigned char *) mark1) + i);
        printf("%03hhu ", data);
        i++;
    }
}
*/