/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:59:17 by nopareti          #+#    #+#             */
/*   Updated: 2024/11/07 10:59:18 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
}
/*
#include <fcntl.h>

int     main(void)
{
        int     fd;

        fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
        ft_putnbr_fd(-486, fd);
        return (0);
}
*/
