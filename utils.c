/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:13:03 by odana             #+#    #+#             */
/*   Updated: 2025/05/25 00:31:16 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	get_conversion(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_handle_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_handle_string(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_handle_int(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_handle_unsigned(va_arg(args, unsigned int)));
	else if (specifier == 'x')
		return (ft_handle_hex_lower(va_arg(args, unsigned int)));
	else if (specifier == 'X')
		return (ft_handle_hex_upper(va_arg(args, unsigned int)));
	else if (specifier == 'p')
		return (ft_handle_pointer(va_arg(args, void *)));
	else if (specifier == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	is_specifier(char c)
{
	int			i;
	const char	*specifiers = "cspdiuxX%";

	i = 0;
	while (specifiers[i])
	{
		if (specifiers[i] == c)
			return (1);
		i++;
	}
	return (0);
}
