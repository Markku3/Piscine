/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:09:09 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/11 15:13:19 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	check;
	int	result;

	check = 0;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (++check <= nb)
	{
		result *= check;
	}
	return (result);
}

/*int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
}*/
