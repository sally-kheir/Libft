/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:51:48 by skheir            #+#    #+#             */
/*   Updated: 2025/11/14 09:44:28 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && (i + j) < len && big[i
				+ j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char *big = "Hello 42 school";
	const char *little = "42";

	char *result1 = ft_strnstr(big, little, 10);
	char *result2 = ft_strnstr(big, "school", 5);
	char *result3 = ft_strnstr(big, "", 5);

	if (result1)
		printf("Résultat 1 : %s\n", result1);
	else
		printf("Résultat 1 : NULL\n");

	if (result2)
		printf("Résultat 2 : %s\n", result2);
	else
		printf("Résultat 2 : NULL\n");

	if (result3)
		printf("Résultat 3 : %s\n", result3);
	else
		printf("Résultat 3 : NULL\n");

	return (0);
}*/
