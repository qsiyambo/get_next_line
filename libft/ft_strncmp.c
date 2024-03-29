/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 16:03:04 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/25 11:17:41 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != 0) && (s2[i] != 0) && (s1[i] == s2[i]) && (i < n))
	{
		i++;
		if (i == n)
		{
			return (0);
		}
	}
	if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) > 0)
	{
		return (1);
	}
	else if ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) < 0)
	{
		return (-1);
	}
	else
	{
		return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
	}
}
