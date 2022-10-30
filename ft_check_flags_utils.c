/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:51:42 by yrhiba            #+#    #+#             */
/*   Updated: 2022/10/30 14:58:04 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fcheck_hash(const char *format, int *i, t_print *tab)
{
    if (format[*i] == '#')
	{
		tab->hash = 1;
		*i += 1;
	}
    return (*i);
}

int	ft_fcheck_space(const char *format, int *i, t_print *tab)
{
    if (format[*i] == 32)
	{
		tab->space = 1;
		*i += 1;
	}
    return (*i);
}

int	ft_fcheck_plus(const char *format, int *i, t_print *tab)
{
    if (format[*i] == '+')
	{
		tab->plus = 1;
		*i += 1;
	}
    return (*i);
}
