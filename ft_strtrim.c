/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skheir <skheir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 09:00:00 by skheir            #+#    #+#             */
/*   Updated: 2025/11/08 13:28:38 by skheir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_check_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_check_set(*s1, set))
		s1++;
	size = ft_strlen(s1);
	while (size && ft_check_set(s1[size - 1], set))
		size--;
	new = malloc(size + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, size + 1);
	return (new);
}
/*#include <stdio.h>

int main(void)
{
    char *s = "sSalut ssssssles amisss";
    char *set = "s";
    char *trimmed = ft_strtrim(s, set);

    if (trimmed)
    {
        printf("Avant : '%s'\n", s);
        printf("Après : '%s'\n", trimmed);
        free(trimmed);
    }
    return 0;
}*/
