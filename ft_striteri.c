/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:33:05 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 12:26:31 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
#include "libft.h"

void uppercase_index(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c -= 32;  // mettre en majuscule les caractères d'indice pair
}

int main(void)
{
    char str[] = "abcdef";
    ft_striteri(str, uppercase_index);
    printf("%s\n", str);  // Affiche : AbCdEf
    return 0;
}*/
