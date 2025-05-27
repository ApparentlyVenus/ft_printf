/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 06:51:45 by odana             #+#    #+#             */
/*   Updated: 2025/05/27 07:47:12 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"
#include"libft/libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (is_specifier(format[i]))
				len += get_conversion(format[i++], args);
			else
			{
				len += write(1, "%", 1);
				len += write(1, &format[i++], 1);
			}
		}
		else
			len += write(1, &format[i++], 1);
	}
	va_end(args);
	return (len);
}
