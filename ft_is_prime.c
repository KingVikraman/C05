/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:30:25 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/15 14:33:21 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	dividor;

	dividor = 2;
	if (nb <= 1)
		return (0);
	while (dividor > 1 && dividor < nb)
	{
		if (nb % dividor == 0)
			return (0);
		else
			dividor++;
	}
	return (1);
}
/*
int main()
{
	int final_solu = ft_is_prime(42);
	printf("%d\n", final_solu);
	return (0);
}
*/
