/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:55:57 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 11:22:51 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("%d\n", ft_isdigit('0')); // 1
    printf("%d\n", ft_isdigit('5')); // 1
    printf("%d\n", ft_isdigit('9')); // 1
    printf("%d\n", ft_isdigit('a')); // 0
    printf("%d\n", ft_isdigit('@')); // 0
    return 0;
}*/
