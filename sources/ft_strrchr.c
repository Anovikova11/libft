/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 13:47:56 by alnoviko          #+#    #+#             */
/*   Updated: 2017/09/25 13:48:41 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while(i >= 0)
	{
		if(s[i] == c)
			return((char*)s + i);
		i--;
	}
	return(NULL);
}
/*
int main() 
{
  char *s;
  int c;

  s = "SASHAAAAAAN";
  c = 'S';
  ft_putstr(ft_strrchr(s, c));
  return 0;
}
*/