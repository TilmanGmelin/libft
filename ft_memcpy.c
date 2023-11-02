/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:45:52 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 05:20:27 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *_dst, const void *_src, size_t _count)
{
	size_t	i;

	if (!_dst && !_src)
		return (NULL);
	i = 0;
	while (i < _count)
	{
		((unsigned char *)_dst)[i] = ((unsigned char *)_src)[i];
		i++;
	}
	return (_dst);
}
