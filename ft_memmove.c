/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:37:09 by skheir            #+#    #+#             */
/*   Updated: 2025/11/14 11:28:05 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int					j;
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	j = 1;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		j = -1;
		d += n - 1;
		s += n - 1;
	}
	while (i < n)
	{
		*d = *s;
		d += j;
		s += j;
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char str[20] = "abcdef";

	// Test simple avec chevauchement
	ft_memmove(str + 2, str, 4);
	printf("%s\n", str); // Attendu : "ababcd"

	return (0);
}*/
