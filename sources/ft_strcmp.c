/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 17:54:53 by alnoviko          #+#    #+#             */
/*   Updated: 2017/09/26 17:54:56 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)

{
	int i;
	
	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] == s2[i])
		s1++;
		s2++;
	}
	return(s1[i]-s2[i]);
}
int main ()
{
   char s1[7] = "sasha";
   char s2[7] = "sashas";
   int result;
   
   result = ft_strcmp(s1, s2);

   if(result < 0)
   {
      printf("s1 is less than s2");
   }
   else if(result > 0) 
   {
      printf("s2 is less than s1");
   }
   else 
   {
      printf("s1 is equal to s2");
   }
   
   return(0);
}