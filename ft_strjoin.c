/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 11:43:26 by alnoviko          #+#    #+#             */
/*   Updated: 2017/10/10 11:43:29 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	str[i++] = *s1++;

	while (s2[i])
	str[i++] = *s2++;

	str[i] = '\0';
	return (str);
}

int main()
{
	char *s1 = "abc";
	char *s2 = "def";

	char *res = ft_strjoin(s1, s2);

	printf("mine : %s\n", res);
}
