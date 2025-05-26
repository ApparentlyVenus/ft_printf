/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odana <odana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:26:09 by odana             #+#    #+#             */
/*   Updated: 2025/05/25 00:59:21 by odana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_handle_string(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (7);
	}

	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
