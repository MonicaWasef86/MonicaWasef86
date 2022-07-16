/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowasef <monica.wasef8@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:44:48 by mowasef           #+#    #+#             */
/*   Updated: 2022/05/26 20:44:58 by mowasef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_put_char(int c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		ft_put_char(c);
		c++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
