/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowasef <monica.wasef8@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:01:51 by mowasef           #+#    #+#             */
/*   Updated: 2022/05/25 01:47:43 by mowasef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int i)
{
	if (i < 0)
	{
		ft_putchar('N');
	}
	else
	{	
		ft_putchar('P');
	}
}
/*
int	main(void)
{
	ft_is_negative(-20);
	return (0);
}*/
