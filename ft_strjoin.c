/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:14:52 by nopareti          #+#    #+#             */
/*   Updated: 2024/11/06 09:30:14 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_length;
	char	*new_str;

	i = 0;
	j = 0;
	total_length = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = malloc(total_length);
	if (!new_str)
		return (NULL);
	while (s1[i])
		new_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_str[j++] = s2[i++];
	new_str[j] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	const char s1[6] = "Hello";
	const char s2[6] = "World";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
*/
