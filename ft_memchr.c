/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:48:30 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 11:37:51 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[] = "Hello, world!";
    char *ptr;

    ptr = ft_memchr(str, 'o', 5);
    if (ptr)
        printf("Trouvé : %s\n", ptr); // 'o'
    else
        printf("Pas trouvé\n");

    ptr = ft_memchr(str, 'w', 5);
    if (ptr)
        printf("Trouvé : %c\n", *ptr);
    else
        printf("Pas trouvé\n"); // Pas trouvé
    return 0;
}*/
