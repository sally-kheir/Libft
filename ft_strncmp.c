/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:40:22 by skheir            #+#    #+#             */
/*   Updated: 2025/11/14 08:57:29 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char *a = "Hello";
	char *b = "Helpo";

	printf("Résultat 1 : %d\n", ft_strncmp(a, b, 3)); // compare "Hel" vs "Hel"
	printf("Résultat 2 : %d\n", ft_strncmp(a, b, 5)); // compare "Hello" vs "Helpo"
	printf("Résultat 3 : %d\n", ft_strncmp(a, "Hello", 10)); // identiques

	return (0);
}*/
