/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 21:56:39 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/15 11:21:23 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	final_solu;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		final_solu = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (final_solu);
	}
}
/*
int main()
{
	int final_solu = ft_fibonacci(7);
	printf("%d\n", final_solu);
	return 0;
}
*/
