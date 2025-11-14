/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:56:06 by skheir            #+#    #+#             */
/*   Updated: 2025/11/14 08:55:27 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char dest[10];
    const char *src = "Bonjour";
    size_t result;

    result = ft_strlcpy(dest, src, sizeof(dest));

    printf("Source      : %s\n", src);
    printf("Destination : %s\n", dest);
    printf("Retour      : %zu\n", result);

    return 0;
}*/
