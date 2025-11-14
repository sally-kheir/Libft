/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:37:41 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 11:16:46 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("%d\n", ft_isalpha('a')); // 1
    printf("%d\n", ft_isalpha('Z')); // 1
    printf("%d\n", ft_isalpha('5')); // 0
    printf("%d\n", ft_isalpha('@')); // 0
    return 0;
}*/
