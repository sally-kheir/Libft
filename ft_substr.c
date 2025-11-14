/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 08:34:34 by skheir            #+#    #+#             */
/*   Updated: 2025/11/14 11:44:01 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *str = "Hello, World!";
    char *sub;

    // Example 1: normal substring
    sub = ft_substr(str, 7, 5); // should return "World"
    if (sub)
    {
        printf("Substring: '%s'\n", sub);
        free(sub);
    }

    // Example 2: start beyond string length
    sub = ft_substr(str, 50, 5); // should return ""
    if (sub)
    {
        printf("Substring: '%s'\n", sub);
        free(sub);
    }

    // Example 3: len longer than remaining string
    sub = ft_substr(str, 7, 50); // should return "World!"
    if (sub)
    {
        printf("Substring: '%s'\n", sub);
        free(sub);
    }

    return 0;
}*/
