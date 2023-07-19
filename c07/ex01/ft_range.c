/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:57:23 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/18 17:21:18 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}	
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*int	main(void)
{
	int min = 8;
	int max = 13;
	int i = 0;
	int *tab = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
