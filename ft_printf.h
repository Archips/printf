/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:22:58 by athirion          #+#    #+#             */
/*   Updated: 2021/12/02 14:23:00 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

/* libft */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

/* tools */
void	ft_putnbrbase(long n, int baselen, char *base, int *len);
void	ft_putnbrbase_ptr(unsigned long n, int baselen, char *base, int *len);

/* options_1 */
int		ft_chr(va_list args);
int		ft_str(va_list args);
int		ft_ptr(va_list args);
int		ft_nbr(va_list args);

/* options_2 */
int		ft_uni(va_list args);
int		ft_hx1(va_list args);
int		ft_hx2(va_list args);
int		ft_pct(va_list args);

/* printf */
void	ft_options(int (*option[8])(void *));
int		ft_parse_input(char c);
int		ft_printf(const char *format, ...);
#endif
