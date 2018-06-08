/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:07:36 by rasingh           #+#    #+#             */
/*   Updated: 2018/06/07 09:42:33 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length(char const *s)
{
	int len;

	len = ft_strlen((char*)s) - 1;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	return (len);
}

static int		ft_first(char const *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	int		len;
	char	*trim;

	if (!s)
		return (NULL);
	i = ft_first(s);
	k = 0;
	len = ft_length(s) - i + 1;
	trim = (char*)malloc((len + 1));
	if (i > len)
		return ("");
	else if (!trim)
		return (NULL);
	while (k < len)
	{
		trim[k] = s[i];
		k++;
		i++;
	}
	trim[k] = '\0';
	return (trim);
}
