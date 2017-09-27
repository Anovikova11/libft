/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 16:14:25 by alnoviko          #+#    #+#             */
/*   Updated: 2017/09/24 16:14:52 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)

{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			return((char*)s + i);
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return((char*)s + i);
	return(NULL);
}
/*
int main() 
{
  char *s;
  int c;

  s = "SASHAAAAAAN";
  c = 'N';
  ft_putstr(ft_strchr(s, c));
  return 0;
}*/