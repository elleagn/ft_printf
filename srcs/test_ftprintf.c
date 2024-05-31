/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:36:54 by elleagn           #+#    #+#             */
/*   Updated: 2024/05/31 10:40:57 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	*ptr;

	ptr = malloc(sizeof(int));
	if (ft_printf("I can print %c%cars !\n", 'c', 'h') == printf("I can print %c%cars !\n", 'c', 'h'))
		ft_printf("OK !\n");
	if (ft_printf("And I can print %s too !\n", "strings") == printf("And I can print %s too !\n", "strings"))
		ft_printf("OK !\n");
	if (ft_printf("Can I print pointers too ? %p\n", ptr) == printf("Can I print pointers too ? %p\n", ptr))
		ft_printf("OK !\n");
	free(ptr);
	return (0);
}
