/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:43:23 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 11:14:05 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("%d\n", ft_isalnum('a')); // 1
    printf("%d\n", ft_isalnum('Z')); // 1
    printf("%d\n", ft_isalnum('5')); // 1
    printf("%d\n", ft_isalnum('@')); // 0
    return 0;
}*/
