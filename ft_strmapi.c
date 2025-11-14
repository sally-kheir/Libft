/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:25:23 by skheir            #+#    #+#             */
/*   Updated: 2025/11/14 08:42:42 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			length;
	char			*res;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	res = malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*#include <stdio.h>
#include "libft.h"

// Exemple de fonction f : transforme les lettres minuscules en majuscules
char my_func(unsigned int i, char c)
{
    (void)i; // on n'utilise pas l'indice ici
    if (c >= 'a' && c <= 'z')
        return c - 32; // 'a' -> 'A'
    return c;
}

int main(void)
{
    char *str = "Hello World!";
    char *res;

    res = ft_strmapi(str, my_func);
    if (!res)
    {
        printf("Erreur d'allocation\n");
        return 1;
    }

    printf("Original : %s\n", str);
    printf("Modifié  : %s\n", res);

    free(res); // Toujours libérer la mémoire
    return 0;
}*/
