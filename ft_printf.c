/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elleagn <elleagn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:28:04 by elleagn           #+#    #+#             */
/*   Updated: 2024/05/30 13:06:17 by elleagn          ###   ########.fr       */
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
	while (*s)
	{
		ft_putchar_fd(*s, 1);
		s++;
	}
	return (ft_strlen(s));
}

int	ft_printnbr(unsigned long int n, int size, char *base)
{
	int	count;

	if (n < size)
	{
		ft_putchar_fd(base[n], 1);
		return (1);
	}
	else
	{
		count = 1 + ft_printnbr(n / size, size, base);
		ft_putchar_fd(base[n % size], 1);
	}
}

int	ft_printvar(char c, va_list *args)
{
	if (c == 'c')
		return (ft_printchar(va_arg(*args, int)));
	if (c == 's')
		return (ft_printstring(va_arg(*args, char *)));
	return (0);
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
