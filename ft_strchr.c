/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:25:38 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 12:14:20 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *str = "Hello World";
    char *ptr;

    ptr = ft_strchr(str, 'o');
    if (ptr)
        printf("Trouvé : %s\n", ptr); // "o World"

    ptr = ft_strchr(str, 'z');
    if (!ptr)
        printf("Non trouvé\n");       // "Non trouvé"

    ptr = ft_strchr(str, '\0');
    printf("Fin de chaîne : %s\n", ptr); // chaîne vide ""

    return 0;
}*/
