/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ftprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elleagn <elleagn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:36:54 by elleagn           #+#    #+#             */
/*   Updated: 2024/05/30 12:53:27 by elleagn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("I can print %c%cars !\n", 'c', 'h');
	ft_printf("And I can print %s too !", "strings");
	return (0);
}
