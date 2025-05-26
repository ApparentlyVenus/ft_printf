/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 08:27:56 by odana             #+#    #+#             */
/*   Updated: 2025/05/25 01:01:02 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	get_conversion(char specifier, va_list args);
int	is_specifier(char c);

int	ft_handle_char(char c);
int	ft_handle_string(char *str);
int	ft_handle_int(int n);
int	ft_handle_unsigned(unsigned int u);
int	ft_handle_hex_lower(unsigned int hex);
int	ft_handle_hex_upper(unsigned int hex);
int	ft_handle_pointer(void *ptr);
#endif
