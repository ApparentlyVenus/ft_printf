/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:28:57 by odana             #+#    #+#             */
/*   Updated: 2025/05/27 07:08:31 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_handle_hex_upper(unsigned int hex)
{
	ft_puthex_upper_fd(hex, 1);
	return (ft_hex_len(hex));
}
