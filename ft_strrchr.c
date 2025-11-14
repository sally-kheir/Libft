/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:31:30 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 13:25:36 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	const char *s = "Hello world!";
	char *res;

	res = ft_strrchr(s, 'o');
	if (res)
		printf("Dernier 'o' trouvé à : %s\n", res);
	else
		printf("Caractère non trouvé\n");
	return (0);
}*/
