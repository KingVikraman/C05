/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:39:00 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/15 11:19:33 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	final_solu;

	final_solu = 1;
	while (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		final_solu = final_solu * nb;
		nb--;
	}
	return (final_solu);
}
/*
int main()
{
	int final_solu = ft_iterative_factorial(7);
	printf("%d\n", final_solu);
	return (0);
}
*/
