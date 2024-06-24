/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 22:30:18 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/15 11:25:27 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	while (r * r <= nb)
	{
		if (r * r == nb)
			return (r);
		else
			r++;
	}
	return (0);
}
/*
int main()
{
	int final_solu = ft_sqrt(49);
	printf("%d\n", final_solu);
	return 0;
}
*/
