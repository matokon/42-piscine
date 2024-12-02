/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:28:45 by mokon             #+#    #+#             */
/*   Updated: 2024/10/24 12:49:03 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	nb1;

	nb1 = nb;
	if (nb < 0)
	{
		return (0);
	}
	while (nb1 != 0)
	{
		if ((nb1 * nb1) == nb)
		{
			return (nb1);
		}
		nb1--;
	}
	return (0);
}

// int main(void)
// {
//     int liczba = 9;
//     int res = ft_sqrt(liczba);
//     printf("%d",res);
// }