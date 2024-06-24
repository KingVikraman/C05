/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:54:04 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/14 21:46:49 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	final_solu;

	final_solu = 1;
	while (power < 0)
		return (0);
	while (power == 0)
		return (1);
	while (power > 0)
	{
		final_solu = final_solu * nb;
		power--;
	}
	return (final_solu);
}
/*
int main()
{
	int final_solu = ft_iterative_power(2,4);
	printf("%d\n", final_solu);
	return 0;
}
*/
