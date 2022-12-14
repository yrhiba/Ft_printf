/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhiba <yrhiba@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:00:03 by yrhiba            #+#    #+#             */
/*   Updated: 2022/11/02 02:42:09 by yrhiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*rtn;
	size_t	total_size;
	size_t	i;

	total_size = count * size;
	if (count && (total_size / count) != size)
		return (NULL);
	rtn = (char *)malloc(total_size);
	if (!rtn)
		return (NULL);
	i = 0;
	while (i < total_size)
		rtn[i++] = 0;
	return ((void *)rtn);
}
