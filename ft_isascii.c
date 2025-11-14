/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:54:12 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 11:19:04 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("%d\n", ft_isascii(65));   // 1 ('A')
    printf("%d\n", ft_isascii(127));  // 1 (DEL)
    printf("%d\n", ft_isascii(128));  // 0
    printf("%d\n", ft_isascii(-1));   // 0
    return 0;
}*/
