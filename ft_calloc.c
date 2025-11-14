/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:25:47 by skheir            #+#    #+#             */
/*   Updated: 2025/11/14 13:01:56 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	unsigned char	*tmp;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if ((nmemb) >= __SIZE_MAX__ / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	tmp = (unsigned char *)ptr;
	i = 0;
	while (i < nmemb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (ptr);
}

/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
	int *tab = ft_calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
		printf("%d ", tab[i]);
	free(tab);
	return 0;
}*/
