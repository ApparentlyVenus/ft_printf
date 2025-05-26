/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:28:57 by odana             #+#    #+#             */
/*   Updated: 2025/05/26 07:15:34 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_handle_hex_upper(unsigned int hex)
{
	int	len;

	ft_puthex_upper_fd(hex, 1);
	len = 0;
	if (hex == 0)
		return (1);
	while (hex != 0)
	{
		hex /= 16;
		len++;
	}
	return (len);
}
