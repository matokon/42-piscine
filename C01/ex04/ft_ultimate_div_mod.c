/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokon <mokon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:29:34 by mokon             #+#    #+#             */
/*   Updated: 2024/10/08 11:15:29 by mokon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp1;

	temp = *a;
	temp1 = *b;
	*a = temp / temp1;
	*b = temp % temp1;
}
// int main(){
//     int a = 3;
//     int b = 2;
//     printf("zmienne przed  a = %d oraz b = %d ",a,b);
//     ft_ultimate_div_mod(&a,&b);
//     printf("zmienne po a = %d oraz b = %d po :",a,b);
//     return (0);
// }