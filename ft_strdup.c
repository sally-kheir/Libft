/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:21:16 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 12:24:41 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup( const char *src)
{
	char	*copy;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    const char *s = "Bonjour 42!";
    char *dup;

    dup = ft_strdup(s);
    if (!dup)
    {
        printf("Erreur malloc\n");
        return 1;
    }

    printf("Original : %s\n", s);
    printf("Dupliqué : %s\n", dup);

    free(dup); // libération de la mémoire
    return 0;
}*/
