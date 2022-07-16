/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowasef <monica.wasef8@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:18:29 by mowasef           #+#    #+#             */
/*   Updated: 2022/05/26 22:03:11 by mowasef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 122;
	while (c >= 97)
	{
		ft_putchar(c);
		c--;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
