/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:22:34 by athirion          #+#    #+#             */
/*   Updated: 2021/12/02 14:22:47 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_parse_input(char c)
{
	int	id;

	id = 0 * (c == 'c')
		+ 1 * (c == 's')
		+ 2 * (c == 'p')
		+ 3 * (c == 'i' || c == 'd')
		+ 4 * (c == 'u')
		+ 5 * (c == 'x')
		+ 6 * (c == 'X')
		+ 7 * (c == '%');
	return (id);
}

void	ft_options(int (*option[8])(void *))
{
	option[0] = (void *)ft_chr;
	option[1] = (void *)ft_str;
	option[2] = (void *)ft_ptr;
	option[3] = (void *)ft_nbr;
	option[4] = (void *)ft_uni;
	option[5] = (void *)ft_hx1;
	option[6] = (void *)ft_hx2;
	option[7] = (void *)ft_pct;
}

int	ft_printf(const char *format, ...)
{
	int		(*option[8])(void *);
	va_list	args;
	int		ret;

	ret = 0;
	ft_options(option);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			ret++;
			format++;
			continue ;
		}
		format++;
		ret += ((*option[ft_parse_input(*format++)])(args));
	}
	va_end(args);
	return (ret);
}
