/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:59:40 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/12 17:22:24 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int main(void)
{
	printf("%d", ft_fibonacci(8));
	return (0);
}*/
