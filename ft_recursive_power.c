/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 21:53:30 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/14 21:55:17 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	final_solu;

	final_solu = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
}
/*
int main()
{
	int final_solu = ft_recursive_power(2,4);
	printf("%d\n", final_solu);
	return 0;
}
*/
