/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:30:34 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 12:07:48 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fun_1_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0)
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		fun_1_fd(n % 10 + '0', fd);
	}
	else
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
}
/*#include <unistd.h>
int main(void)
{
    ft_putnbr_fd(12345, 1); // écrit sur stdout
    write(1, "\n", 1);
    ft_putnbr_fd(-9876, 1); // écrit sur stdout
    write(1, "\n", 1);
    ft_putnbr_fd(-2147483648,1);
    return 0;
}*/
