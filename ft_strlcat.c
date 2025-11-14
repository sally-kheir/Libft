/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:09:28 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 12:35:33 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen(src);
	if (!dst && size == 0)
		return (si);
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = '\0';
	return (di + si);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char dst[20] = "Hello ";
    char *src = "42!";

    size_t ret = ft_strlcat(dst, src, sizeof(dst));

    printf("dst : %s\n", dst);   // Hello 42!
    printf("return : %zu\n", ret); // 9

    return 0;
}*/
