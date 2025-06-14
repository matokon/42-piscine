/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:22:23 by mokon             #+#    #+#             */
/*   Updated: 2024/10/24 12:48:49 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	else
	{
		while (power != 0)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}

// int main(void)
// {
//     int nb = 34;
//     int power = 4;
//     int result = ft_iterative_power(nb, power);
//     printf("%d",result);
//     return (0);
// }