/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:47:34 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/14 19:50:51 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	final_solu;

	final_solu = 1;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (ft_recursive_factorial(nb - 1) * nb);

}
/*
int main()
{
	int final_solu = ft_recursive_factorial(6);
	printf("%d\n", final_solu);
	return (0);
}
*/
