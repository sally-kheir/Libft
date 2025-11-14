/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:55:35 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 11:32:40 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_len(int n)
{
	long int	len;
	long int	nbr;

	len = 0;
	nbr = n;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	unsigned int	number;

	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		number = (unsigned int)(-(long)n);
	}
	else
		number = (unsigned int)n;
	if (n == 0)
		s[0] = '0';
	while (number > 0)
	{
		s[--len] = (number % 10) + '0';
		number = number / 10;
	}
	return (s);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("%s\n", ft_itoa(0));          // "0"
    printf("%s\n", ft_itoa(42));         // "42"
    printf("%s\n", ft_itoa(-42));        // "-42"
    printf("%s\n", ft_itoa(2147483647)); // "2147483647"
    printf("%s\n", ft_itoa(-2147483648));// "-2147483648"
    return 0;
}*/
