/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:25:42 by tgwin             #+#    #+#             */
/*   Updated: 2022/04/27 14:25:43 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}
