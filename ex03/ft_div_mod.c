/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:51:02 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/04 13:09:31 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	div = 12;
	int mod = 5;

	ft_div_mod(22, 7, &div, &mod);
	printf("div %d, mod %d", div, mod);
	return (0);
}
