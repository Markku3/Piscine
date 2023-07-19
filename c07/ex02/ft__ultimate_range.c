/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__ultimate_range.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:55:29 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/18 15:08:22 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*r;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	r = (int *)malloc(sizeof(int) * size);
	if (r == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = r;
	i = 0;
	while (min + i < max)
	{
		r[i] = min + i;
		i++;
	}
	return (max - min);
}

/*int main(void)
{
	int min = -4;
	int max = 9;
	int *tab;
	
		printf("%d", ft_ultimate_range(&tab, min, max));
}*/
