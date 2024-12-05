/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:55:52 by mokon             #+#    #+#             */
/*   Updated: 2024/10/08 14:10:34 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	temp;

	a = 0;
	while (a < size / 2)
	{
		temp = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = temp;
		a++;
	}
}

// int main()
// {
//     int tab[] = {1, 2, 3, 4, 5, 6};
//     int rozmiar = 6;
//     ft_rev_int_tab(tab,rozmiar);
//     return (0);
// }
