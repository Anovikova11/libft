/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 13:13:58 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/10 13:14:01 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (!(s2 = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != 0)
	{
		if (!ft_end(s, i))
		{
			s2[j] = s[i];
			j++;
		}
		i++;
	}
	s2[j] = 0;
	return (s2);
}
