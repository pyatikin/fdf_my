/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgwin <tgwin@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:30:44 by tgwin             #+#    #+#             */
/*   Updated: 2022/04/27 14:30:45 by tgwin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupr(char *s)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			s[i] = ft_toupper(s[i]);
			i++;
		}
	}
	return (s);
}
