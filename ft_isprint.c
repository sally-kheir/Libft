/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:59:17 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 11:24:45 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("%d\n", ft_isprint('A')); // 1
    printf("%d\n", ft_isprint(' ')); // 1
    printf("%d\n", ft_isprint('~')); // 1
    printf("%d\n", ft_isprint('\n')); // 0
    printf("%d\n", ft_isprint(127));  // 0
    return 0;
}*/
