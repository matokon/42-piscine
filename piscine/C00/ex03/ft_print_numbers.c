/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:10:36 by mokon             #+#    #+#             */
/*   Updated: 2024/10/08 09:41:48 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	c;

	number = 0;
	while (number < 10)
	{
		c = number + 48;
		write(1, &c, 1);
		number++;
	}
}

// main(void)
// {
//     ft_print_numbers();
//     return (0);
// }
