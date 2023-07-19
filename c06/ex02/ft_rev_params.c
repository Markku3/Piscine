/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:58:27 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/14 20:35:08 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = (argc - 1);
	if (argc > 0)
	{
		while (i != 0)
		{
			j = 0;
			while (argv[i][j])
			{
				write (1, &argv[i][j++], 1);
			}
			write (1, "\n", 1);
			i--;
		}
	}
}