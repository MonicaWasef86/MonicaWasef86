/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowasef <monica.wasef8@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:15:10 by mowasef           #+#    #+#             */
/*   Updated: 2022/05/25 23:15:30 by mowasef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48 - 1;
	while (a++ < 55)
	{
		b = a;
		while (b++ < 56)
		{
			c = b;
			while (c++ < 57)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
