/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:57:52 by nopareti          #+#    #+#             */
/*   Updated: 2024/11/07 10:57:56 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*new_str;

	j = 0;
	new_str = (char *) malloc(len + 1);
	if (!new_str)
		return (NULL);
	while (j < len)
	{
		new_str[j] = s[j + start];
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	const char s[13] = "Salut ca va ?";
	char *sub = ft_substr(s, 6, 7);
	printf("%s", sub);
	return (0);
}
*/
