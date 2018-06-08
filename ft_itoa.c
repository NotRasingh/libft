/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:22:39 by rasingh           #+#    #+#             */
/*   Updated: 2018/06/07 09:48:25 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_intlen(int c)
{
	int	i;

	i = 0;
	if (c <= 0)
		i++;
	while (c)
	{
		c /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		d;

	d = 0;
	len = ft_intlen(n);
	if (!(num = ft_strnew(len)))
		return (NULL);
	len--;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
	{
		num[0] = '-';
		n *= -1;
		d = 1;
	}
	while (len >= d)
	{
		num[len--] = (n % 10) + 48;
		n /= 10;
	}
	num[ft_strlen(num)] = '\0';
	return (num);
}
