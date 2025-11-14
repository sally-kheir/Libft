/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:56:31 by skheir            #+#    #+#             */
/*   Updated: 2025/11/14 09:00:13 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] != ptr1[i])
			return ((unsigned char)ptr[i] - (unsigned char)ptr1[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char a[] = "Hello";
    char b[] = "HelLo";

    printf("%d\n", ft_memcmp(a, b, 5)); // > 0, car 'l' - 'L' = 108 - 76 = 32
    printf("%d\n", ft_memcmp(a, a, 5)); // 0
    return 0;
}
*/
