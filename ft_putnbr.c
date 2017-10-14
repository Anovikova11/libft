/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 18:57:49 by alnoviko          #+#    #+#             */
/*   Updated: 2017/09/26 18:58:56 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	n2;

	n2 = n;
	if (n2 < 0)
	{
		ft_putchar('-');
		n2 = -n2;
	}
	if (n2 > 9)
	{
		ft_putnbr(n2 / 10);
		ft_putnbr(n2 % 10);
	}
	else
	{
		ft_putchar(n2 + 48);
	}
}