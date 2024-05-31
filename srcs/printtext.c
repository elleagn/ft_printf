/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printtext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 06:37:55 by gozon             #+#    #+#             */
/*   Updated: 2024/05/31 10:31:55 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_printstring(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (ft_strlen(s));
}
