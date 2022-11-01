/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:38:09 by yrhiba            #+#    #+#             */
/*   Updated: 2022/11/02 00:41:35 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, int *rtn, int i, t_print *tab)
{
	ft_init_tab(tab);
	i = ft_check_format(format, ft_check_flags(format, i + 1, tab),
			tab);
	*rtn += tab->len;
	return (i);
}
