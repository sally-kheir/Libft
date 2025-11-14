/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:42:10 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 10:44:10 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
/*
#include <stdio.h>
#include "libft.h"
int	main(void)
{
	printf("'%s' -> %d\n", "42", ft_atoi("42"));
	printf("'%s' -> %d\n", "   -42", ft_atoi("   -42"));
	printf("'%s' -> %d\n", "+42", ft_atoi("+42"));
	printf("'%s' -> %d\n", "000123", ft_atoi("000123"));
	printf("'%s' -> %d\n", "123abc", ft_atoi("123abc"));
	printf("'%s' -> %d\n", "abc123", ft_atoi("abc123"));
	printf("'%s' -> %d\n", "2147483647", ft_atoi("2147483647"));   // INT_MAX
	printf("'%s' -> %d\n", "-2147483648", ft_atoi("-2147483648")); // INT_MIN
	return (0);
}*/
