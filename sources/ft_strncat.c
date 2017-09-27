/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 20:20:24 by alnoviko          #+#    #+#             */
/*   Updated: 2017/09/21 20:22:04 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = 0;
	j =0;

	while(dest[i])
		i++;
	while(src[j] && n>0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return(dest);
}

int main(void)
{
	char dest[100] = "sasha";
	char src[100] = "anna";

   ft_putstr(ft_strncat(dest, src, 2));
   return(0);
 }