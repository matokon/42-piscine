/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:17:38 by mokon             #+#    #+#             */
/*   Updated: 2024/10/24 12:48:37 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (result);
	}
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

// int main(void)
// {
// 	int s = 5;
// 	int result = ft_iterative_factorial(s);
// 	printf("%d",result);
// 	return (0);
// }
