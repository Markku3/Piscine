/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testivaapoista.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhynynen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:31:40 by mhynynen          #+#    #+#             */
/*   Updated: 2023/07/17 14:10:16 by mhynynen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point 		point;

	set_point(&point);
	printf("%d %d", point.x, point.y);
	return (0);
}
