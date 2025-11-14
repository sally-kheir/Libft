/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:18:17 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 11:05:22 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}	
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char tab[10] = "123456789";
    ft_bzero(tab, 5);
    for (int i = 0; i < 10; i++)
        printf("%d ", tab[i]);
    return 0;
}*/	
