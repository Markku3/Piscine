/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:47:09 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/18 15:29:09 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*duplicate;

	size = 0;
	while (*src != '\0')
	{
		size++;
		src++;
	}
	src = src - size;
	duplicate = (char *) malloc((size + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size + 1)
	{
		duplicate[i] = src[i];
		i++;
	}
	return (duplicate);
}

/*int main(void)
{
	char *str = "Moikka";
	char *str2 = ft_strdup(str);

	printf("str ptr = %s str2 ptr = %s", str, str2);
	return (0);
}*/
