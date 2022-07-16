/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowasef <monica.wasef8@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:21:58 by mowasef           #+#    #+#             */
/*   Updated: 2022/05/25 23:18:57 by mowasef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c <= 122)
	{
		ft_putchar(c);
		c++;
	}
}
/*int	main(void)
{
	ft_print_alphabet();
}*/
