/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:29:50 by odana             #+#    #+#             */
/*   Updated: 2025/05/25 00:58:44 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_handle_pointer(void	*ptr)
{
	int				len;
	unsigned long	hex;

	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	hex = (unsigned long)ptr;
	ft_putstr_fd("0x", 1);
	len = 2;
	if (hex == 0)
		return (len + 1);
	while (hex != 0)
	{
		hex /= 16;
		len++;
	}
	ft_puthex_fd((unsigned long)hex, 1);
	return (len);
}
