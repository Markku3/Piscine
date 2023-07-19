/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:34:00 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/12 15:52:55 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(4,1));
	return (0);
}*/
