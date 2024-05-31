/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:28:04 by elleagn           #+#    #+#             */
/*   Updated: 2024/05/31 08:27:06 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printvar(char c, va_list *args)
{
	if (c == 'c' || c == '%')
		return (ft_printchar(va_arg(*args, int)));
	if (c == 's')
		return (ft_printstring(va_arg(*args, char *)));
	return (0);
	if (c == 'p')
		return (ft_printptr(va_arg(*args, void *)));
	if (c == 'i' || c == 'd')
		return (ft_printnbr(va_arg(*args, int), 10, "0123456789"));
	if (c == 'u')
		return (ft_printnbr(va_arg(*args, unsigned), 10, "0123456789"));
	if (c == 'x')
		return (ft_printnbr(va_arg(*args, int), 16, "0123456789abcdef"));
	if (c == 'X')
		return (ft_printnbr(va_arg(*args, int), 16, "0123456789ABCDEF"));
}

int	ft_printf(const char *s, ...)
{
	va_list	arg_ptr;
	int		i;
	int		printnbr;

	i = 0;
	printnbr = 0;
	va_start(arg_ptr, s);
	while (s[i])
	{
		if (s[i] != '%')
			printnbr += ft_printchar(s[i]);
		else
		{
			printnbr += ft_printvar(s[i + 1], &arg_ptr);
			i++;
		}
		i++;
	}
	va_end(arg_ptr);
	return (printnbr);
}

int main(void)
{
	ft_printnbr(1156, 10, "0123456789");
	return (0);
}
